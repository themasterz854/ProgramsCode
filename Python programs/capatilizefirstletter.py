s = input()
s= s.split()
print(s)
for i in range(0,len(s)):
    s[i] = s[i].capitalize()
    
s2 = ""
for x in s:
    s2+=x

print(s2)
