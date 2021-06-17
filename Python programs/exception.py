        # -*- coding: utf-8 -*-
"""
Created on Tue Jun  2 11:13:28 2020

@author: Zaid
"""


def spam(divideBy):
    try:
        return 42 / divideBy
    except ZeroDivisionError:
        print('Error: Invalid argument.')

print(spam(0))
print(spam(1))