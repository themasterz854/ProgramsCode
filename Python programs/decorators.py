def our_decorator(other_func):
    def wrapper(args_for_function):
        print('This happens before we call the function')
        return other_func(args_for_function)
 
    return wrapper

@our_decorator
def greet(name):
    print('Hello,', name)
    
    
greet("NOOB")