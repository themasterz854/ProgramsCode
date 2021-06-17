def add(a, b=1, *args):
    total = a + b
    for n in args:
        total += n
    return total

'''
args is a tuple

Let's get acquainted with the ** operator used to pass a varying
number of keyword arguments into a function.
**kwargs collects all possible extra values in a dictionary 
with keywords as keys.



def func(positional_args, defaults, *args, **kwargs):
    pass
'''
def capital(**kwargs):
    for key, value in kwargs.items():
        print(value, "is the capital city of", key)
 
 
capital(Canada="Ottawa", Estonia="Tallinn", Venezuela="Caracas", Finland="Helsinki")