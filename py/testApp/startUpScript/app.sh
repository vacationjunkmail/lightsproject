#!/usr/bin/env bash
# https://www.tutorialspoint.com/How-to-set-python-environment-variable-PYTHONPATH-on-Linux
# https://linuxize.com/post/how-to-run-linux-commands-in-background/
export PYTHONPATH="/home/pi/code/py/testApp:$"
/home/pi/code/py/testApp/appOne/appOne.py #> /dev/null 2>&1 &
/home/pi/code/py/testApp/appTwo/appTwo.py #> /dev/null 2>&1 & 


