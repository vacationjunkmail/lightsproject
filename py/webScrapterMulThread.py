#!/usr/bin/env python3
import os
import threading
import requests
# https://realpython.com/python-download-file-from-url/
def download_file_stream(url, filename, directory = "/home/pi/Downloads"):
    fullFile = os.path.join(directory,filename)
    response = requests.get(url, stream = True)
    
    with open(fullFile, 'wb') as file:
        for fileChunk in response.iter_content(chunk_size = 10 * 1024):
            file.write(fileChunk)    
        print(f"{fullFile} downloaded")

def download_file(url, filename, directory = "/home/pi/Downloads"):
    fullFile = os.path.join(directory,filename)
    response = requests.get(url)
    
    with open(fullFile, 'wb') as file:
        file.write(response.content)
        print(f"{fullFile} downloaded")

# URLs of two files to be downloaded
urls = ["https://data.ny.gov/api/views/d6yy-54nr/rows.csv?accessType=DOWNLOAD", "https://data.wa.gov/api/views/f6w7-q2d2/rows.csv?accessType=DOWNLOAD"]
filenames = ["Lottery_Powerball_Winning_Numbers__Beginning_2010.csv", "Electric_Vehicle_Population_Data.csv"]

# create and start two threads
for i in range(2):
    t = threading.Thread(target=download_file_stream, args=(urls[i], filenames[i]))
    t.start()
