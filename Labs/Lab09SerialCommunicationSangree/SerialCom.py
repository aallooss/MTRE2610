# -*- coding: utf-8 -*-
"""
Created on Thu Nov  5 12:13:11 2020

@author: scott
"""

import serial
import msvcrt
import time

character = '';
ser = serial.Serial('com3', timeout=0.001)
while True:
    # part 1
    # num = ser.inWaiting()
    # x = ser.read(num)
    # print(type(x))
    # print(len(x))
    # print(x[-1])
    # time.sleep(0.2)
    
    # part 2
    # if (msvcrt.kbhit() == True):
    #     character = msvcrt.getch()
    #     ser.write(character)
    
    # part 3
    # if (msvcrt.kbhit() == True):
    #     character = msvcrt.getch()
    #     if (ord(character) == 119):
    #         ser.write(character)
    #     if(ord(character) == 113):
    #         ser.write(character)
    # if(ser.inWaiting() > 0):
    #     num = ser.inWaiting()
    #     x = ser.read(num)
    #     print(x[-1])
    
    # part 4
    if (msvcrt.kbhit() == True):
         character = msvcrt.getch()
         if (ord(character) == 119):
             ser.write(character)
         if(ord(character) == 113):
             ser.write(character)
    if(ser.inWaiting() >= 10):
        num = ser.inWaiting()
        x = ser.read(num)
        index = x.find(48)
        print(x[index+1], x[index+2])
ser.close()
