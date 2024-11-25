#!/usr/bin/env python3

from common.dataFile import exampleFunction
from common.db.connect_to_db import dbConnection
from time import sleep

def main():
    exampleFunction()
    #test()
    db = dbConnection()
    results = db.select_query('select * from blogdb.blog')
    print(results.fetchall())
    db.disconnect()

    while True:
        print('two')
        sleep(2)
    return None

if __name__ == "__main__":
    main()
