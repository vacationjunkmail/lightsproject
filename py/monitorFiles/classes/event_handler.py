#!/usr/bin/env python3

from pathlib import Path
from watchdog.events import FileSystemEventHandler

import subprocess

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

    @staticmethod
    def move_file(sourceFile,fileDestination)->None:
        if Path(sourceFile).exists():
            args = ['rsync','-hav',sourceFile,fileDestination,'--remove-source-files','--quiet']
            subprocess.call(args)
            print(f"File:{type(sourceFile)} moved")
            
        return None
