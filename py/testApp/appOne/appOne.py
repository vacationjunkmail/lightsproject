#!/usr/bin/env python3

from common.dataFile import exampleFunction
from common.db.connect_to_db import dbConnection
from time import sleep
import signal
import sys

def termination_handler(signum,frame):
    print("Clean up stuff ")
    print("Quitting")
    print(signum)
    db.disconnect()
    sys.exit()


def main():
    global db
    exampleFunction()
    #test()
    db = dbConnection()
    results = db.select_query('select * from blogdb.blog')
    print(results.fetchall())
    #db.disconnect()

    signal.signal(signal.SIGTERM,termination_handler)

    while True:
        print('yes')
        sleep(2)
    return None

if __name__ == "__main__":
    main()
