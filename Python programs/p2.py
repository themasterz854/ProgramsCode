def uniq(list1):
    unique=[]
    for x in list1:
        if x not in unique:
            unique.append(x)
    return unique


n=int(input("How many elements?\n"))
list0=[]
print("Enter the elements")
for i in range(0,n):
    list0.insert(i,input())

listu=uniq(list0)
print(listu)
