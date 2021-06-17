n=int(input("HOW MANY ELEMENTS?\n"))
x=[]
count=0
print("Enter the elements")
for i in range(0,n):
    x.insert(i,input())

ele=input("Enter the element\n")
for i in x:
    if i==ele:
        count+=1

print("Number of occurrences = %d"%count)
