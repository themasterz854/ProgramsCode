n=int(input("Enter the number of fibonacci numbers to be printed.\n"))
fib=[0,1]
if(n<=0):
    print("ERROR")
else:
    if(n>=1):
        print(fib[0],"",end="")
    if(n>1):
        print(fib[1],"",end="")
        for i in range(2,n):
            fib.insert(i,fib[i-1]+fib[i-2])
            print(fib[i],"",end="")

