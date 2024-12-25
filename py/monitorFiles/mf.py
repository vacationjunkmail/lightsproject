#!/usr/bin/env python3

import argparse
from pathlib import Path
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
import subprocess
import sys
import time
import json

def check_directory(configData)->None:
    # make sure there is a destination
    if configData['destination']:
        for f in Path(configData['source']).iterdir():
            #f.touch()
            print(f"Moving:{f}")
            Event_Handler.move_file(f,configData['destination'])
    return None

class Event_Handler(FileSystemEventHandler):

    def __init__(self,source,destination):
        self.source = Path(source)
        self.destination = Path(destination)
        sourceDirectory = self.source

    @property 
    def sourceDir(self):
        print(f"source:{self.source} type:{type(self.source)}")

    @sourceDir.setter
    def sourceDir(self,s):
        self.source = Path(s)

    def destinationDir(self):
        return f"destination:{self.destination}"
        
    def on_created(self,event)->None:
        print("on_created")
        Event_Handler.move_file(event.src_path,self.destination)
        return None

    #def on_modified(self,event)->None:
    #    if not event.is_directory:
    #        print(f"-->on_modified:{event.src_path} size:{Path(event.src_path).stat().st_size}")
    #        self.move_file(event)
    #    return None

    @staticmethod
    def move_file(sourceFile,fileDestination)->None:
        if Path(sourceFile).exists():
            args = ['rsync','-hav',sourceFile,fileDestination,'--remove-source-files','--quiet']
            subprocess.call(args)
            
        return None

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
            check_directory(configData)
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
