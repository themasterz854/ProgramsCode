n=int(input("How many elements?\n"))
x=[]
count=0
pos=[]
print("Enter the elements.")
for j in range(0,n):
    x.insert(j,int(input()))
ele=int(input("Enter the element\n"))

for k in range(0,n):
    if x[k]==ele:
        pos.insert(count,k)
        count+=1
if(count==0):
    print("ERROR")
else:
    i=int(input("Enter the occurence to be removed\n"))
    if(i>count or i<=0):
        print("ERROR")
    else:
        n-=1
        for j in range(pos[i-1],n):
            x[j]=x[j+1]
        print("The elements are")
        for i in range(0,n):
            print(x[i])

        
        
    
