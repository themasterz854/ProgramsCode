a = [1, 2, 3]
c = a
 
print(a == c)  # True, they contain the same value
 
# And they also have the same identity
print(id(a))  # 4558721352
print(id(c))  # 4558721352

a = [1, 2, 3]
b = [1, 2, 3]
 
identity_test = a is b  # False, because a and b refer to different objects in memory
print(identity_test)
equality_test = a == b  # True, because a and b contain the same value
print(equality_test)
 
b = a
 
identity_test = a is b  # True, because now both variables refer to the same object
print(identity_test)