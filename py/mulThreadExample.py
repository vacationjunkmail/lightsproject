#!/usr/bin/env python3

import psutil
import threading
import time

# https://www.stratascratch.com/blog/python-threading-like-a-pro/
def CpuUsage():
    while True:
        cpuUsage = psutil.cpu_percent(interval=1)
        print(f"CPU Usage: {cpuUsage}%")
        time.sleep(5)

def MemUsage():
    while True:
        memUsage = psutil.virtual_memory().percent
        print(f"Memory Usage: {memUsage}%")
        time.sleep(5)

cpuT = threading.Thread(target=CpuUsage)
memT = threading.Thread(target=MemUsage)

cpuT.start()
memT.start()
print("Main thread has ended")
