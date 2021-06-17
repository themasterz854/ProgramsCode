# immutable objects
string = "Python"
integer = 4879
 
print(string.__hash__())  # 227333825058812235
print(integer.__hash__())  # 4879
print(hash(string))  # 227333825058812235

'''
immutable objects are hashable while mutable are nots



from collections.abc import Hashable
 
obj = ...  # some object
isinstance(obj, Hashable)  # True or False
'''


person1 = ("James", "Ryan")
person2 = ("Ryan", "James")
person3 = ("Ryan", "James")

age_dict = {}
age_dict[person1] = 36
age_dict[person2] = 27
age_dict[person3] = 42

print(age_dict[person2])