from collections import OrderedDict

from collections import namedtuple
 
from collections import ChainMap

# this is the constructor
marks = OrderedDict()
marks['Smith'] = 9.5
marks['Brown'] = 8.1
marks['Moore'] = 7.4
print(marks)  # OrderedDict([('Smith', 9.5), ('Brown', 8.1), ('Moore', 7.4)])
 
# this is the conversion
my_dict = {'Smith': 9.5, 'Brown': 8.1, 'Moore': 7.4}
my_ord_dict = OrderedDict(my_dict)
print(my_ord_dict)  # OrderedDict([('Smith', 9.5), ('Brown', 8.1), ('Moore', 7.4)])

print(my_ord_dict)  # OrderedDict([('Smith', 9.5), ('Brown', 8.1), ('Moore', 7.4)])
 
my_ord_dict.popitem(last=True)   # ('Moore', 7.4)
print(my_ord_dict)  # OrderedDict([('Smith', 9.5), ('Brown', 8.1)])
 
my_ord_dict.popitem(last=False)  # ('Smith', 9.5)
print(my_ord_dict)  # OrderedDict([('Brown', 8.1)])


print(my_ord_dict)  # OrderedDict([('Smith', 9.5), ('Brown', 8.1), ('Moore', 7.4)])
 
my_ord_dict.move_to_end('Brown', last=False) 
print(my_ord_dict)  # OrderedDict([('Brown', 8.1), ('Smith', 9.5), ('Moore', 7.4)])
 
my_ord_dict.move_to_end('Smith', last=True) 
print(my_ord_dict)  # OrderedDict([('Brown', 8.1), ('Moore', 7.4), ('Smith', 9.5)])

 
# the subclass is named 'Person' in our case
person = namedtuple('Person', ['name', 'age', 'occupation'])

# field values can be defined either positionally or using the field names
mary = person('Mary', '25', 'doctor')
david = person(name='David', age='33', occupation='lawyer')
 
print(mary.name)   # Mary
print(david)       # person(name='David', age='33', occupation='lawyer')
# the elements can also be accessed by their index, as in a regular tuple
print(david[2])    # lawyer


 
 
laptop_labels = {'Lenovo': 600, 'Dell': 2000, 'Asus': 354}
operating_system = {'Windows': 2500, 'Linux': 400, 'MacOS': 54}
chain = ChainMap(laptop_labels, operating_system)
print(chain)  # ChainMap({'Lenovo': 600, 'Dell': 2000, 'Asus': 354}, {'Windows': 2500, 'Linux': 400, 'MacOS': 54})