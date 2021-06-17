class myclass:
    var = 2
    
    def somefunc(self):
        pass

class Book:
    material = "paper"
    cover = "paperback"
    all_books = []
    
my_book = Book()  #creates the object
 
'''

__new__ is the one that calls __init___

__init__ is a or initializerr'''

class River:
    # list of all rivers
    all_rivers = []
    
    def __init__(self, name, length):
        self.name = name
        self.length = length
        # add current river to the list of all rivers
        River.all_rivers.append(self)
 
volga = River("Volga", 3530)
seine = River("Seine", 776)
nile = River("Nile", 6852)
 
# print all river names
for river in River.all_rivers:
    print(river.name)

class Car:
    def __init__(self, model):
        self.model = model
 
    def drive(self):
        print("vroom vroom")
 
my_car = Car("Volkswagen")

my_car.drive()
Car.drive(my_car)

'''
round(value, numberofdecimal places)
'''

class Sun:
    n = 0  # number of instances of this class
 
    def __new__(cls):
        if cls.n == 0: 
            cls.n += 1
            return object.__new__(cls)  # create new object of the class
    
    
    

class Transaction:
    def __init__(self, number, funds, status="active"):
        self.number = number
        self.funds = funds
        self.status = status
 
    def __repr__(self):
        return "Transaction({}, {})".format(self.number, self.funds)
 
    def __str__(self):
        return "Transaction {} for {} ({})".format(self.number, self.funds, self.status)
 
 
payment = Transaction("000001", 9999.999)
print(payment)
# Transaction 000001 for 9999.999 (active)
print(repr(payment))
# Transaction(000001, 9999.999)
'''

# inheritance syntax
class ChildClass(ParentClass):
    # methods and attributes
    ...

'''