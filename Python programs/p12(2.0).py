d1={"key1":100,"key2":200}
d2={"key3":300,"key4":400}
print("d1 = ",d1," d2 = ",d2)
d1.update(d2)
print("d1 = ",d1)

x=input("Enter the key to be deleted\n")
if x not in d1:
    print("ERROR KEY NOT FOUND")
else:
    del d1[x]

x=input("Enter the key to be searched \n")
if x not in d1:
    print("ERROR KEY NOT FOUND")
else:
    print(d1[x])
