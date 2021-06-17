fname=input("Enter the filename\n")
num_lines = 0
num_words = 0
num_chars = 0

f=open(fname,'r')
for line in f:
    words = line.split()
    num_lines+= 1
    num_words+= len(words)
    num_chars+= len(line)

print("Number of characters = %d"%num_chars)
print("Number of words = %d"%num_words)
print("Number of lines = %d"%num_lines)

f.close()
