# -*- coding: utf-8 -*-
"""
Created on Tue Mar 24 18:15:11 2020

@author: Zaid
"""
import csv

with open('example.csv') as csvfile:
    readCSV = csv.reader(csvfile, delimiter=',')
    
    colors = []
    dates = []
    for row in readCSV:
        print(row)
        colors.append(row[3])
        dates.append(row[0])
        
    print(dates,colors)
    try: 
        WhatColor = input("what colour do u wish to know the date of?").lower()
        
        coldex = colors.index(WhatColor)
        
        thedate = dates[coldex]
        
        print(thedate)
    
    except Exception as e:
        print(e)
    
    print("continuing")