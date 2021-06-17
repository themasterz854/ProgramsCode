# -*- coding: utf-8 -*-
"""
Created on Thu Jun 25 12:24:29 2020

@author: Zaid
"""
import string
import math
import random

print(math.factorial(5))  # prints the value of 5!
 
print(math.log(10))  # prints the natural logarithm of 10
 
print(math.pi)  # math also contains several constants
print(math.e)

''' 
super_module.digits()



'''
print(string.digits)


# don't modify this code or variable `n` may not be available
n = int(input())

# put your code here
random.seed(n)
print(random.randint(-100, 100))

abs_integer = abs(-10)  # 10
abs_float = abs(-10.0)  # 10.0
 
round_integer = round(10.0)  # 10, returns integer when ndigits is omitted
round_float = round(10.2573, 2)  # 10.26
 
pow_integer = pow(2, 10)  # 1024
pow_float = pow(2.0, 10)  # 1024.0
 
largest = max(1, 2, 3, 4, 5)  # 5
smallest = min(1, 2, 3, 4, 5)  # 1

fabs_integer = math.fabs(-10)  # 10.0
fabs_float = math.fabs(-10.0)  # 10.0
 #returns floats
pow_integer = math.pow(2, 10)  # 1024.0
pow_float = math.pow(2.0, 10)  # 1024.0

print(math.floor(2.5))
print(math.ceil(2.5))

deg = 60.0
x = math.radians(deg)  # 1.047...
 
cos = math.cos(x)  # 0.500...
sin = math.sin(x)  # 0.866...
 
degrees = math.degrees(x)  # 59.999...


