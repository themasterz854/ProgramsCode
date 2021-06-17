x=input("Enter the string\n")
y=[]
count=0
pos=[]
n=len(x)
ch=input("Enter the character\n")
for k in range(0,n):
    if x[k]==ch:
        pos.insert(count,k)
        count+=1
if(count==0):
    print("ERROR")
else:
    for j in range(0,n):
        y.insert(j,x[j])
    i=int(input("Enter the occurence to be removed\n"))
    if(i>count):
        print("ERROR")
    else:
        n-=1
        for j in range(pos[i-1],n):
            y.insert(j,x[j+1])
        x=""
        for i in range(0,n):
            x+=y[i]
        print("The string is \n"+x)
          
