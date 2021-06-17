'''
with statement as variable_name:
    ...

'''
'''
n_files = 1000000
files = []
 
for i in range(n_files):
    with open('test.txt') as f:
        files.append(f)
 
# OK!
'''
    