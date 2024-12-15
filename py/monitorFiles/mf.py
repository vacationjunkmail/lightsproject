#!/usr/bin/env python3

from pathlib import Path
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
import time
import subprocess

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
if __name__ == "__main__":
    
    sourceDir = Path('/home/pi/Desktop/source')
    global destinationDir
    destinationDir = Path('/home/pi/Desktop/destination')

    #for item in sourceDir.iterdir():
    #    print(item)

    event_handler = FileSystemEventHandler()
    # Prints all methods in a class
    #print(dir(event_handler))

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
