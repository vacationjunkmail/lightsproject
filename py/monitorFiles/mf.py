#!/usr/bin/env python3

from pathlib import Path
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
import time
import subprocess
import sys

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

class Monitor_Directory(FileSystemEventHandler):

    def __init__(self,source = '/home/pi/Desktop/source',destination = '/home/pi/Desktop/destination'):
        self.source = Path(source)
        self.destination = Path(destination)

    @property 
    def sourceDir(self):
        print(f"*******************source:{self.source} type:{type(self.source)}")

    @sourceDir.setter
    def sourceDir(self,s):
        self.source = Path(s)

    def destinationDir(self):
        print(f"destination:{self.destination}")
        
if __name__ == "__main__":

    m = Monitor_Directory()
    # Resetting source
    #m.sourceDir = '/new/directory'
    # Calling property to see
    #m.sourceDir
    print(m.source) 
    sys.exit()    
    sourceDir = Path('/home/pi/Desktop/source')
    global destinationDir
    destinationDir = Path('/home/pi/Desktop/destination')

    event_handler = FileSystemEventHandler()

    #Custom on_created
    event_handler.on_created = on_created
    event_handler.on_modified = on_modified
    directoryObserver = Observer()
    #print(dir(directoryObserver))
    directoryObserver.schedule(event_handler,sourceDir,recursive = True)
    directoryObserver.start()

    try:
        while True:
            time.sleep(3)
            check_directory(sourceDir)
    except Exception as e:
        print(f"Exception:{e}")
        directoryObserver.stop()

    directoryObserver.join()
