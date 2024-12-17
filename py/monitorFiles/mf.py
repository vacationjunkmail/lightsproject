#!/usr/bin/env python3

import argparse
from pathlib import Path
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
import subprocess
import sys
import time
import json

def check_directory(directory):
    for f in directory.iterdir():
        f.touch()
    return True

def on_modified(event):
    move_file(event)

def move_file(event):
    if not event.is_directory:
        args = ['rsync','-hav',event.src_path,destinationDir,'--remove-source-files']
        subprocess.call(args)

def on_created(event):
    print(f"Event:{event.src_path}")
    move_file(event)

class Event_Handler(FileSystemEventHandler):

    def __init__(self,source,destination):
        self.source = Path(source)
        self.destination = Path(destination)

    @property 
    def sourceDir(self):
        print(f"*******************source:{self.source} type:{type(self.source)}")

    @sourceDir.setter
    def sourceDir(self,s):
        self.source = Path(s)

    def destinationDir(self):
        return f"destination:{self.destination}"
        
if __name__ == "__main__":

    parser = argparse.ArgumentParser()
    parser.add_argument('-f','--file', help='Config files stored in config dir')

    configDirectory = '/home/pi/code/py/monitorFiles/config'
    configFile = 'config.json'

    args = parser.parse_args()

    if args.file:
        configFile = args.file

    with open(f"{configDirectory}/{configFile}") as f:
        configData = json.load(f)

    #m = Event_Handler(configData['source'],configData['destination'])
    # Resetting source
    #m.sourceDir = '/new/directory'
    # Calling property to see
    #m.sourceDir
    #print(m.source) 
    #print(m.destination)
    #print(m.destinationDir())
    
    directoryObserver = Observer()
    event_handler = Event_Handler(configData['source'],configData['destination']) 
    directoryObserver.schedule(event_handler,configData['source'],recursive = True)
    directoryObserver.start()
    try:
        while True:
            time.sleep(2)
    except Exception as e:
        print(f"Exception::-->{e}\nCaused the program to stop")
        directoryObserver.stop()
    directoryObserver.join()

    #sys.exit()    
    #sourceDir = Path('/home/pi/Desktop/source')
    #global destinationDir
    #destinationDir = Path('/home/pi/Desktop/destination')

    #event_handler = FileSystemEventHandler()

    #Custom on_created
    #event_handler.on_created = on_created
    #event_handler.on_modified = on_modified
    #directoryObserver = Observer()
    #print(dir(directoryObserver))
    #directoryObserver.schedule(event_handler,sourceDir,recursive = True)
    #directoryObserver.start()

    #try:
    #    while True:
    #        time.sleep(3)
    #        check_directory(sourceDir)
    #except Exception as e:
    #    print(f"Exception:{e}")
    #    directoryObserver.stop()

    #directoryObserver.join()
