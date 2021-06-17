'''
To copy an object, we can use shallow copying, it is often used with mutable containers.
 As you know, mutable containers, e.g. a list, store references to objects that store values. 
 With shallow copying, we can create a copy of a list that contains the same objects, but the reference to a container will be new.
'''
import copy
 
lst = [2, 3, 9]
new_lst = copy.copy(lst)

lst = [2, 3, 9]
new_lst = lst.copy()

lst = [[5, 5], [2, 3, 9]]
new_lst = copy.deepcopy(lst)
print(id(lst))
print(id(new_lst))