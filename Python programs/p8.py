n=int(input("How many elements?\n"))
print("Enter the elements")
x=[]
for i in range(0,n):
    x.insert(i,int(input()))
    if(i==0):
        lar=x[0]
        seclar=-x[0]
    elif(x[i]>lar):
        lar=x[i]

for j in range(0,n):
        if(lar==seclar):
            seclar=x[1]
        elif(x[j]>seclar and x[j]<lar):
            seclar=x[j]
        
print("\nSecond Largest number is %d"%seclar)
