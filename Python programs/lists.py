# -*- coding: utf-8 -*-
"""
Created on Tue Mar 24 17:44:33 2020

@author: Zaid
"""
x = [1,2,3,4,3]
print(x.count(3))
print(x.index(1))
x.insert(5,5)
x.remove(2)
x.append(6)
print(x)


'''
LIST COMPREHENSIONS

new_list = [x for x in some_iterable if condition (optional) else ]


list1 = [1,2,3,4]

square = [x**2 for x in list1]


'''

'''

NESTED LISTS

numbers = [1, [2, 3], 4]
 
print(numbers[1])     # [2, 3]
print(numbers[1][1])  # 3



'''
'''

list.sort() inplace sorting changed the original list 
sorted()  sorts the list and returns new list


names = ['Mary', 'James', 'Tom', 'Katarina', 'Jonh']
names.sort(key=len)
print(names)  # ['Tom', 'Mary', 'John', 'James', 'Katarina'] sorts acc to length

'''

'''
list.reverse()
reversed(list)

'''