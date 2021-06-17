# -*- coding: utf-8 -*-
"""
Created on Tue Apr  7 20:08:31 2020

@author: Zaid
"""


x = set()
x.add(1)
print(x)
list1= [1,1,1,2,2,2,3,4,5,6,6,6,4]
y=set(list1)
print(y)

'''
irst things first, we create a set by listing its elements in curly braces. The only exception would be an empty set that can be formed with the help of a set()function:

empty_set = set()
print(type(empty_set))   # <class 'set'>
 
empty_dict = {}
print(type(empty_dict))  # <class 'dict'>
If you pass a string or a list into set(), the function will return a set consisting of all the elements of this string/list:

flowers = {'rose', 'lilac', 'daisy'}
 
# the order is not preserved
print(flowers)  # {'daisy', 'lilac', 'rose'}  
 
 
letters = set('philharmonic')
print(letters)  # {'h', 'r', 'i', 'c', 'o', 'l', 'a', 'p', 'm', 'n'}
Each element is considered a part of a set only once, so double letters are counted as one element:

letters = set('Hello')
print(len(letters))  # the length equals 4
print(letters)       # {'H', 'e', 'o', 'l'}
Moreover, using sets can help you avoid repetitions:

states = ['Russia', 'USA', 'USA', 'Germany', 'Italy']
print(set(states))  # {'Russia', 'USA', 'Italy', 'Germany'}
Have a look: as the order of naming the elements doesn’t play any role, the following two sets will be equal.

set1 = {'A', 'B', 'C'}
set2 = {'B', 'C', 'A'}
print(set1 == set2)  # True
Working with a set’s elements
You can:

get the number of set’s elements with the help of len() function.
go through all the elements using for loop.
check whether an element belongs to a specific set or not (in / not in operators), you get the boolean value.
nums = {1, 2, 2, 3}
print(1 in nums, 4 not in nums)  # True True
add a new element to the set with add() method or update() it with another collection
nums = {1, 2, 2, 3}
nums.add(5)
print(nums)  # {1, 2, 3, 5}
delete an element from a specific set using discard/remove methods. The only difference between them operating is a situation when the deleted element is absent from this set. In this case, discard does nothing and remove generates a KeyError exception.
nums.remove(2)
print(nums)  # {1, 3, 5}
 
 
empty_set = set()
empty_set.remove(2)
print(empty_set)  # KeyError: 2
remove one random element using pop() method. As it’s going to be random, you don’t need to choose an argument.
nums = {1, 2, 2, 3}
nums.pop()
print(nums)  # {2, 3}
delete all elements from the set with clear() method.

'''


'''
UNION
democrats = {'Kennedy', 'Obama'}
republicans = {'Trump', 'Lincoln'}
presidents = democrats.union(republicans)
print(presidents)
# The output is {'Kennedy', 'Obama', 'Trump', 'Lincoln'}



ghostbusters = {'Peter', 'Raymond', 'Egon'}
soldiers = {'Winston'}
secretaries = {'Janine'}
ghostbusters |= soldiers
ghostbusters.update(secretaries)
print(ghostbusters)
# The output is {'Peter', 'Raymond', 'Egon', 'Winston', 'Janine'}

INTERSECTION
light_side = {'Obi-Wan', 'Anakin'}
dark_side = {'Palpatine', 'Anakin'}
both_sides = light_side.intersection(dark_side)
print(both_sides)
# The output is {'Anakin'}
print(light_side & dark_side)
# The output is {'Anakin'}

creatures = {'human', 'rabbit', 'cat'}
pets = {'rabbit', 'cat'}
creatures.intersection_update(pets)
print(creatures)
# The output is {'rabbit', 'cat'}
beasts = {'crocodile', 'cat'}
creatures &= beasts
print(creatures)
# The output is {'cat'}

painters = {'Klimt', 'Michelangelo', 'Picasso'}
ninja_turtles = {'Michelangelo', 'Leonardo'}
print(painters.difference(ninja_turtles))
# The output is {'Klimt', 'Picasso'}
print(painters - ninja_turtles)
# The output is {'Klimt', 'Picasso'}

criminals = {'Al Capone', 'Blackbeard', 'Bonnie and Clyde'}
gangsters = {'Al Capone'}
pirates = {'Blackbeard'}
 
criminals.difference_update(gangsters)
criminals -= pirates
print(criminals)
# The output is {'Bonnie and Clyde'}
'''