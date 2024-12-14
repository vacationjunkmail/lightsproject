#!/usr/bin/env python3

from pathlib import Path
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
import time

def check_directory(directory):
    for f in directory.iterdir():
        #print(f"{f.parts[-1]} is modified")
        f.touch()
    return True

def on_modified(event):
    move_file(event.src_path)

def move_file(source):
    print(source)

if __name__ == "__main__":

    def on_created(event):
        print(f"Event:{event.src_path}")
    
    sourceDir = Path('/home/pi/Desktop/source/')
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
