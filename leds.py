#!/usr/bin/env python3 	

import board
import neopixel
import sys

from time import sleep

num_of_leds = 300

def clear_leds(p,n):
    for i in reversed(range(n)):
        p[i] = (0,0,0)
        _pause(.1)
    for i in range(2):
        p.fill((255,0,0))
        _pause(500)
        p.fill((0,0,0))
        _pause(400)
    print("Done")
    return ''

def _pause(wait):
    sleep(wait/1000.0)
    return ''


pixels = neopixel.NeoPixel(board.D12,num_of_leds,brightness=.5)
pixels.fill((0,0,0))
_pause(50)
pixels.fill((255,220,0))
pixels.show()
_pause(500)

clear_leds(pixels,num_of_leds)
sys.exit()
pixels.fill((0,0,0))
y = 1
z = 2
p=.05
for x in range(0, num_of_leds,3):
    pixels[x] = (255, 0, 0)
    _pause(p)
    pixels[x+y]= (0,255,0)
    _pause(p)
    pixels[x+z] = (0,0,255)
    _pause(p)
clear_leds(pixels,num_of_leds)

