#!/usr/bin/env python3
import os
from pathlib import Path, PurePath
import sys

extensions = '.txt,.png,.ntif'
_extensions = extensions.split(',')
print(f"extensions list:{extensions}")

filePath = Path("mike.txt.doc.text")

print(f"file:{filePath} extension is {filePath.suffix}")
