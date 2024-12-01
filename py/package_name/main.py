#!/usr/bin/env python3
#import package_name.subpackage1

files = {}
files['one'] = ['a','b','c']

for key,value in files.items():
    for data in files[key]:
        print(data)
