#!/usr/bin/env python3
import os
from pathlib import Path, PurePath

base_dir = '/home/pi/Downloads'
del_dir = '/home/pi/Downloads/1/2/3/4/5/6/7/8/9/10//'
del_dir = os.path.normpath(del_dir)

while del_dir != base_dir:
    currentDir = PurePath(del_dir).name
    try:
        Path(del_dir).rmdir()
        print(f"Directory {currentDir} deleted")
    except Exception as e:
        print(f"Path:{currentDir} does not exist")
    old_path = del_dir.split('/')
    del_dir = '/'.join(old_path[:-1])
print("Create directories recursively mkdir -p /home/pi/Downloads/1/2/3/4/5/6/7/8/")

