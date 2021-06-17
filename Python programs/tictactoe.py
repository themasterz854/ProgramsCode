# -*- coding: utf-8 -*-
"""
Created on Tue Apr  7 21:14:39 2020

@author: Zaid
"""
import threading
print_lock = threading.Lock()
def searchx(c,d):
    global searchflag
    if d=='r':
        if searchflag==0:
            
            for i in range(0,3):
                flagr='0'
                for j in range(0,3):
                    if a[i][j]==c:
                        flagr=c
                    else:
                        flagr='0'
                        break
                if flagr==c:
                    break
            if flagr==c:
                searchflag=1
                with print_lock:
                    print("Player 1 is the winner rowwise")
    if d=='c':
         if searchflag==0:
            
            for i in range(0,3):
                flagc='0'
                for j in range(0,3):
                    if a[j][i]==c:
                        flagc=c
                    else:
                        flagc='0'
                        break
                if flagc==c:
                    break
            if flagc==c:
                searchflag=1
                with print_lock:
                    print("Player 1 is the winner columnwise")
                
    if d=='d':
        if searchflag==0:
            flagd='0'
            for i in range(0,3):
                if a[i][i]==c:
                    flagd=c
                else:
                    flagd='0'
                    break
            if flagd==c:
                searchflag=1
                with print_lock:
                    print("Player 1 is the winner diagonally")
                   
            i=0
            j=2
            while(j>=0):
                if a[i][j]==c:
                    flagd=c
                else:
                    flagd='0'
                    break
                i+=1
                j-=1
            if flagd==c:
                searchflag=1
                with print_lock:
                    print("player 1 is the winner diagonally")


def searcho(c,d):
    global searchflag
    if d=='r':
        if searchflag==0:
            
            for i in range(0,3):
                flagr='0'
                for j in range(0,3):
                    if a[i][j]==c:
                        flagr=c
                    else:
                        flagr='0'
                        break
                if flagr==c:
                    break
            if flagr==c:
                searchflag=1
                with print_lock:
                    print("Player 2 is the winner rowwise")
    if d=='c':
         if searchflag==0:
            
            for i in range(0,3):
                flagc='0'
                for j in range(0,3):
                    if a[j][i]==c:
                        flagc=c
                    else:
                        flagc='0'
                        break
                if flagc==c:
                    break
            if flagc==c:
                searchflag=1
                with print_lock:
                    print("Player 2 is the winner columnwise")
                
    if d=='d':
        if searchflag==0:
            flagd='0'
            for i in range(0,3):
                if a[i][i]==c:
                    flagd=c
                else:
                    flagd='0'
                    break
            if flagd==c:
                searchflag=1
                with print_lock:
                    print("Player 2 is the winner diagonally")
                   
            i=0
            j=2
            while(j>=0):
                if a[i][j]==c:
                    flagd=c
                else:
                    flagd='0'
                    break
                i+=1
                j-=1
            if flagd==c:
                searchflag=1
                with print_lock:
                    print("player 2 is the winner diagonally")
searchflag=0
    
a = [['1','2','3'],['4','5','6'],['7','8','9']]
for i in range(0,3):
    print(a[i])
print("Player 1 begins with x")
count=1
y=[]
while(1):
    if count>9:
        print("TIE")
        break
    rem = count%2
    if rem:
        print("Player 1 (X)")
    else:
        print("Player 2 (O)")
    n = int(input("Enter the position\n"))
    if n not in y:
        y.append(n)
        if n==1:
            if rem:
                a[0][0]='X'
            else:
                a[0][0]='O'
        elif n==2:
             if rem:
                a[0][1]='X'
             else:
                a[0][1]='O'
        elif n==3:
             if rem:
                a[0][2]='X'
             else:
                a[0][2]='O'
        elif n==4:
             if rem:
                a[1][0]='X'
             else:
                a[1][0]='O'
        elif n==5:
             if rem:
                a[1][1]='X'
             else:
                a[1][1]='O'
        elif n==6:
             if rem:
                a[1][2]='X'
             else:
                a[1][2]='O'
        elif n==7:
             if rem:
                a[2][0]='X'
             else:
                a[2][0]='O'
        elif n==8:
             if rem:
                a[2][1]='X'
             else:
                a[2][1]='O'
        elif n==9:
             if rem:
                a[2][2]='X'
             else:
                a[2][2]='O'
        count+=1
    else:
        print("error position already taken")

    t1 = threading.Thread(target = searchx, args = ('X','r'))
    t2 = threading.Thread(target = searcho, args = ('O','r'))
    t3 = threading.Thread(target = searchx, args = ('X','c'))
    t4 = threading.Thread(target = searcho, args = ('O','c'))
    t5 = threading.Thread(target = searchx, args = ('X','d'))
    t6 = threading.Thread(target = searcho, args = ('O','d'))
    
    t1.start()
    t6.start()
    t2.start()
    t5.start()
    t3.start()
    t4.start()
    
    
    
    t1.join()
    t2.join()
    t3.join()
    t4.join()
    t5.join()
    t6.join()
    
    if searchflag:
        for i in range(0,3):
            with print_lock:
                print(a[i])
        break
    for i in range(0,3):
            with print_lock:
                print(a[i])
    print("")
    
       
        