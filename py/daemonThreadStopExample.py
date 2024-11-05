#!/usr/bin/env python3
import threading
import time

def server_status():
    """Simulated function to print server status every 2 seconds."""
    while True:
        # This will print indefinitely until the main program exits
        print("[Server Status]: Running")
        time.sleep(2)

# Initialize the thread with the server_status function as its target
t = threading.Thread(target=server_status)

# Setting the thread as a daemon means it will automatically exit when the main program does
t.daemon = True

# Start the server status thread
t.start()

def run_server():
    """Simulated function for server main loop."""
    for _ in range(10):
        # Simulate the server doing some work
        print(f"[Server] count {_}: Processing data...")
        time.sleep(1)

run_server()  # Run the main server function
print("Server shutdown.")
