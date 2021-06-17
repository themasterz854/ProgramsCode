# -*- coding: utf-8 -*-
"""
Created on Tue Apr  7 21:04:33 2020

@author: Zaid
"""
#map(function, iterable)
def square(num):
    return num**2

my_nums = [1,3]
 

x = list(map(square,my_nums))
print(x)

odd_numbers = filter(lambda x: x % 2, my_nums)
 
print(list(odd_numbers))
# The output is [1, 3, 5, 7, 9]

def my_product(list_1, list_2):
    return list(map(lambda x,y: x*y,list_1,list_2))

print(my_product(my_nums, odd_numbers))