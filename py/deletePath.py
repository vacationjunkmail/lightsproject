#!/usr/bin/env python3
import os
from pathlib import Path, PurePath

def directoryExists(p):
    # os.F_OK:path exist
    # os.R_OK:readable path
    # os.W_OK:writable path
    # os.X_OK:executable
    return os.access(p,os.F_OK|os.R_OK|os.W_OK|os.X_OK,effective_ids=True)

base_dir = '/home/pi/Downloads'
del_dir = '/home/pi/Downloads/1/2/3/4/5/6/7/8/9/10//'
del_dir = os.path.normpath(del_dir)
numberDeleted = 0
while del_dir != base_dir:
    currentDir = PurePath(del_dir).name
    try:
        if directoryExists(del_dir):
            Path(del_dir).rmdir()
            print(f"Directory {currentDir} deleted")
            numberDeleted+=1
    except Exception as e:
        print(e)
    old_path = del_dir.split('/')
    del_dir = '/'.join(old_path[:-1])
print("Create directories recursively mkdir -p /home/pi/Downloads/1/2/3/4/5/6/7/8/")
print(f"{numberDeleted} directories deleted")
