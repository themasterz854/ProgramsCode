r1 , c1 = input().split()
r1 = int(r1)
c1 = int(c1)
A = []
B = []
C = []
list1 = []
for j in range(0,r1):
    list1 = input().split()
    A.append(list1)
    list1 = []
r2 , c2 = input().split()
r2 = int(r2)
c2 = int(c2)
for j in range(0,r2):
    list1 = input().split()
    B.append(list1)
    list1 = []
    
if r1 == r2 and c1 == c2:
    
    for j in range(0,r1):
        for i in range(0,c1):
            list1.append(int(A[j][i]) + int(B[j][i]))
        C.append(list1)
        list1 = []
    print()
    for j in range(0,r1):
        for i in range(0,c1):
            print(str(C[j][i]),end=" ")
        print()
else:
    print("ERROR")