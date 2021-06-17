import numpy as np
first = np.array([1, 2, 3, 4, 5])
print(first)                       # [1 2 3 4 5]
print(type(first))                 # <class 'numpy.ndarray'>
first = np.array([1, 2, 3, 4, 5])
second = np.array([[1, 1, 1],
                   [2, 2, 2]])
print(second.shape)  # (2, 3)
array = np.array([[1,  2,  3],
                  [4,  5,  6],
                  [7,  8,  9],
                  [10, 11, 12]])
print(array.size)
print(array.ndim)
print(len(array))
print(array.shape[1])
