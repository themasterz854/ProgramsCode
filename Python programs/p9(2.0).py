n=int(input("Enter the number of elements\n"))
a=[]
count=0
pos=[]
print("Enter the elements")
for i in range(0,n):
    a.insert(i,int(input()))

ele=int(input("Enter the element\n"))
for i in range(0,n):
    if(a[i]==ele):
        pos.insert(count,i)
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
            a[j]=a[j+1]
        for i in range(0,n):
            print(a[i],end=" ")
