import itertools
students_maths = ['Ann', 'Kate', 'Tom']
students_english = ['Tim', 'Carl', 'Dean']
students_history = ['Jane', 'Mike']
 
for student in itertools.chain(students_maths, students_english, students_history):
    print(student)
    
first_list = ['Hi', 'Bye', 'How are you']
second_list = ['Jane', 'Anton']
 
for first, second in itertools.product(first_list, second_list):
    print(first, second)
 
# Hi Jane
# Hi Anton
# Bye Jane
# Bye Anton
# How are you Jane
# How are you Anton


my_iter = itertools.combinations(range(1, 1000000), 2)
 
for i in range(5):
    print(next(my_iter))

# (1, 2)
# (1, 3)
# (1, 4)
# (1, 5)
# (1, 6)