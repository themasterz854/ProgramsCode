# This is a list...
my_list = [1, 2, 3]
 
# ... and this is how we create an iterator from it
my_iterator = iter(my_list)
print(my_iterator)
 
# <list_iterator object at 0x000001F06D792B70>
print(next(my_iterator))
# 1
 
print(next(my_iterator))
# 2
 
print(next(my_iterator))
# 3

first_names = ['John', 'Anna','Tom']
last_names = ['Smith', 'Williams', 'Davis']
 
for name, last_name in zip(first_names, last_names):
    print(name, last_name)
 
# John Smith
# Anna Williams
# Tom Davis

months_list = ['Jan', 'Feb', 'Mar', 'Apr', 'May', 'Jun', 
               'Jul', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec']
 
for n, month in enumerate(months_list):
    print(n + 1, month)
 
# 1 Jan
# 2 Feb
# 3 Mar
# 4 Apr
# 5 May
# 6 Jun
# etc.