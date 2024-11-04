#!/usr/bin/env python3
import threading
import os
import time
import shutil

class DiskMonitorThread(threading.Thread):
    def __init__(self, threshold=80):
        super().__init__()
        self._stop_event = threading.Event()
        self.threshold = threshold

    def stop(self):
        self._stop_event.set()

    def run(self):
        while not self._stop_event.is_set():
            total, used, free = shutil.disk_usage("/")
            # Calculate percentage of used disk space
            used_percent = (used / total) * 100
            if used_percent > self.threshold:
                print(f"WARNING: Disk usage has crossed {self.threshold}%!")
            time.sleep(10)  # Check every 10 seconds

# Usage
monitor = DiskMonitorThread(threshold=50)  # Let's set the warning threshold to 50% for testing purposes
monitor.start()

try:
    # Let the monitoring continue for 1 minute (as an example) before stopping the thread.
    time.sleep(60)
finally:
    monitor.stop()
    monitor.join()

print("Disk monitoring stopped.")
