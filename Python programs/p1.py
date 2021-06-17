def calclet(x):
    uc=0
    lc=0
    for i in x:
        if i==" ":
            continue
        elif i==i.upper():
            uc+=1
        else:
            lc+=1
    print("Number of UPPERCASE letters is %d and lowercase letters is %d"%(uc,lc))

calclet(input("Enter the string\n"))

     
