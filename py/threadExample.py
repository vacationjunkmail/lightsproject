#!/usr/bin/env python3

import threading

def hello():
    print("Hello")

helloThread = threading.Thread(target = hello)
helloThread.start()
