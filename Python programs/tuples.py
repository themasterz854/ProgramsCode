# -*- coding: utf-8 -*-
"""
Created on Tue Apr  7 19:52:54 2020

@author: Zaid
"""

t = (1,2,3,2)
print(t.index(2))
print(t.count(2))

a = "letter A"
b = "letter B"
a, b = b, a  # check it out!
print(a, b)  # letter B letter A
hobbies_Adam = ('reading', ('jogging', 'boxing', 'yoga'), 'movies')

def unpack(input_tuple):
    b = []
    a,*b = input_tuple
    l = []
    if isinstance(a,tuple):
        for j in a:
            l.append(j)
    else:
        l.append(a)
    for i in b:
        if isinstance(i,tuple):
            for j in i:
                l.append(j)
        else:
            l.append(i)
    unpacked = tuple(l)
    return unpacked


print(unpack(hobbies_Adam))