def compression(s):
    x=list(set(s))
    n=len(x)
    y=[0]*n
    x.sort()
    for i in range(0,n):
        for j in range(0,len(s)):
            if(x[i]==s[j]):
                y[i]+=1
                
    s2=""
    for i in range(0,n):
        s2+=str(x[i])
        s2+=str(y[i])
    return s2


s=input()
s=compression(s)
print(s)