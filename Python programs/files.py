        # -*- coding: utf-8 -*-
"""
Created on Tue Apr  7 20:10:59 2020

@author: Zaid
"""

f = open('file4.txt','r')
print(f.read())
f.seek(0)
print(f.read())
f.seek(0)
print(f.readlines())
f.close()

f = open('file4.txt','w+')
f.write("HELLO NOOBS")

print(f.read())
f.close()

'''
'r'	Open for reading. If the file doesn't exist, an error occurs.
'w'	Open for writing and truncate. If the file already exists, it will be overwritten.
'a'	Open for writing. If the file already exists, append to the end of the file.
'b'	Open in binary mode.
'+'	Open for updating (reading and writing).
't'	Open as a text


'''

'''
To read the file you can:

use the read(size) method;
use the readline(size) method;
use the readlines() method;
iterate over the lines with a for loop.
'''
'''
file = open('animals.txt', 'r')
for line in file:
    print(line)
 
# The output:
# Dog
# 
# Cat
# 
# Rabbit
# 
# Sea turtle
# 
# Penguin
 
file.close()
'''

'''
names = ['Kate', 'Alexander', 'Oscar', 'Mary']
 
name_file = open('names.txt', 'w', encoding='utf-8')
 
# write the names on separate lines
for name in names:
    name_file.write(name + '\n')
 
name_file.close()

'''
'''
names = ['Kate\n', 'Alexander\n', 'Oscar\n', 'Mary\n']
 
name_file = open('names.txt', 'w', encoding='utf-8')
 
name_file.writelines(names)
 
name_file.close()
'''

my_file = open('testfile.txt', 'w')
print('This string will be in the file...', file=my_file)
my_file.close()

# PDFS

from PyPDF2 import PdfFileReader as r,PdfFileWriter as w
names = ["HEY","BOTS","NOOB"]
# r.getNumPages()
# r.getPage()
# w.addPages()
# w.encrypt(user_pwd,owner_pwd=None, use_128bit = True)

