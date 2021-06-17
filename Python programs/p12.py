d1={"key1":21,"key2":22}
print(d1)
d2={"key3":23,"key4":24}
print(d2)
d1.update(d2)
print(d1)
del d1[input("Enter the key to be deleted.\n")]
flag=0
x=input("Enter the key to be searched.\n")
for j in d1:
    if j==x:
        flag=1
        break

if(flag):
    print(d1[x])
else:
    print("ERROR KEY NOT FOUND")
print(d1.keys())
print(d1.values())
print(d1.items())