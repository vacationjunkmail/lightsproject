#!/usr/bin/env python3 	
import RPi.GPIO as gpio
import time

def delay_time(t):
	time.sleep(t)
	return''
light = 18
gpio.setmode(gpio.BCM)
gpio.setup(light,gpio.OUT,initial=gpio.LOW)

try:
	gpio.output(light,gpio.HIGH)
	gpio.output(light,gpio.LOW)
	delay_time(300)
	gpio.cleanup()
except KeyboardInterrupt as e:
	print(e)
	gpio.cleanup()
