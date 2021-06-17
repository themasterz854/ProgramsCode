# write your code here
while(1):
    sumx = 0
    flag = 0
    list1 = []
    x = input()
    if x == "/help":
        print("The program calculates the sum of numbers")
        continue
    if  x == "/exit":
        print("Bye!")
        break
    list1 = x.split()
    if list1 != []:
        for i in range(0,len(list1)):
            list2 = [0, 3]
            list2 = list(list1[i])
            if list2[0] == "-":
                flag = 1
                if len(list2) == 1:
                    continue
                if list2[1] =="-" and len(list2) > 1:
                    if len(list2) % 2 == 0:
                        flag = 0
                    continue
                    
            elif list2[0] == "+":
                flag = 0
                if len(list2) == 1:
                    continue
                if list2[1] == "+":
                    continue
            if flag:
                if int(list1[i]) > 0:
                    sumx -= int(list1[i])
                else:
                    sumx += int(list1[i])
            else:
                sumx += int(list1[i])
        print(sumx)
        