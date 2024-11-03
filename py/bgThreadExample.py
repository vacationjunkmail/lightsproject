#!/usr/bin/env python3

import threading
import time

def worker():
    print(f"Thread Starts")
    time.sleep(2)
    print(f"Thread Ends")

workerT1 = threading.Thread(target = worker)
workerT1.start()
print("Main thread has ended")
