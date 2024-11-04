#!/usr/bin/env python3

from concurrent.futures import ThreadPoolExecutor
import os
import requests

#https://realpython.com/python-download-file-from-url/#performing-parallel-file-downloads

def DownloadFile(url,directory="/home/pi/Downloads"):
    resp = requests.get(url)
    if "content-disposition" in resp.headers:
        contentDisp = resp.headers["content-disposition"]
        filename = contentDisp.split("filename=")[1]
    else:
        filename = url.split("/")[-1]

    fullFile = os.path.join(directory,filename)
    with open(fullFile, "wb") as file:
        file.write(resp.content)
    print(f"{fullFile} downloaded")

urlTemp = ("https://api.worldbank.org/v2/en/indicator/{resource}?downloadformat=csv")
resources = ["SP.POP.TOTL","NY.GDP.MKTP.CD","EN.POP.DNST"]

urls = [urlTemp.format(resource=item) for item in resources]

with ThreadPoolExecutor() as executor:
    executor.map(DownloadFile,urls)


