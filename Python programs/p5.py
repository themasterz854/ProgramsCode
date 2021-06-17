fname=input("Enter the filename\n")
word=input("Enter the word to be searched\n")
count=0
f=open(fname,'r')
for line in f:
    words = line.split()
    for j in words:
        if j==word:
            count+=1

print("The word %s appears %d times"%(word,count))
f.close()
