# -*- coding: utf-8 -*-
"""
Created on Tue Mar 24 19:15:48 2020

@author: Zaid
"""
exDict = {'jack': [15,'blonde'], 'Bob': [22,'brown'], 'alice':[12,'black'], 'Kevin':[17,'ginger']}
print(exDict['jack'][1])

exDict['Tim'] = 14
print(exDict)

exDict['Tim']=15
print(exDict)

del exDict['Tim']
print(exDict)

count = {}
message = 'I am noob.'
for character in message:
    count.setdefault(character,0)
    count[character]+=1
    
print(count)

'''

# get method does not throw an error
print(testable.get('key'))  # value
print(testable.get('not_a_key'))  # None
del dict #deletes the whole dictionary


'''
'''

# create empty dictionary
freq_dict = {}
 
# loop through text and count words
for word in text_list:
    # set the default value to 0
    freq_dict.setdefault(word, 0)
    # increment the value by 1
    freq_dict[word] += 1
 
# examples
print(freq_dict["gambit"])  # 1
print(freq_dict["a"])  # 3

'''