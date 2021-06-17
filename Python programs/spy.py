x=[]
n = int(input("enter the number of elements"))

for i in range(0,n):
    x.append(int(input()))
    
for i in range(0,n-2):
    flag=0
    if x[i]==0:
        if x[i+1]==0:
            if x[i+2]==7:
                flag=1
                break
    
if flag:
    print("The name is Bond. James Bond")

