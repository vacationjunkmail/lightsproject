#!/usr/bin/env python3

import argparse
from pathlib import Path
from watchdog.observers import Observer
from watchdog.events import FileSystemEventHandler
from classes.event_handler import Event_Handler as EH
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
            EH.move_file(f,configData['destination'])
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

    directoryObserver = Observer()
    #event_handler = Event_Handler(configData['source'],configData['destination']) 
    event_handler = EH(configData['source'],configData['destination']) 
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
