x=input("Enter the string\n")
n=0
n=len(x)
flag=1
x=x.lower()
for i in range(0,n):
    if x[i]!=x[n-1-i]:
        print("Not a palindrome")
        flag=0
        break
if (flag):
    print("It is a palindrome")
    

