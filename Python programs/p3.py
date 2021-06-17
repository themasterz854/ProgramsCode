def Bincoff(n,k):
    val=1
    if(k>n/2):
        k=n-k
    for i in range(0,k):
        val=val*(n-i)
        val=val//(i+1)
    return val

n=int(input("Enter the number of rows to be displayed\n"))
for linen in range(0,n):
    print(" "*(n-linen),end="")
    for  elen in range(0,linen+1):
        print(Bincoff(linen,elen),"",end="")
    print()
