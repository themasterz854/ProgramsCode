import threading
import time

stopthreads=0
print_lock = threading.Lock()
def linsearch1(list1,ele1):
    pos1 = -1
    n = len(list1)
    mid = int(((n+1)/2)-1)
    global stopthreads
    for i in range(0,mid+1):
        if(stopthreads==0):
           
            if list1[i]==ele1:
                pos1 = i
                stopthreads=1
                break
        else:
            break
    with print_lock:
        print("thread1 pos ",pos1)
 

def linsearch2(list2,ele2):
    pos2=-1
    global stopthreads
    n = len(list2)
    mid = int(((n+1)/2)-1)
    for i in range(mid,n):
        if(stopthreads==0):
            if list2[i]==ele2:
                pos2=i
                stopthreads=1
                break
        else:
            break
    with print_lock:
        print("thread2 pos ",pos2)

def linsearch3(list3,ele3):
    pos3=-1
    global stopthreads
    n = len(list3)
    mid = int(((n+1)/2)-1)
    for i in range(mid,-1,-1):
        if(stopthreads==0):
            if list3[i]==ele3:
                pos3=i
                stopthreads=1
                break
        else:
            break
    with print_lock:
        print("thread3 pos ",pos3)

def linsearch4(list4,ele4):
    pos4=-1
    global stopthreads
    n = len(list4)
    mid = int(((n+1)/2)-1)
    for i in range(n-1,mid-1,-1):
        if(stopthreads==0):
            if list4[i]==ele4:
                pos4=i
                stopthreads=1
                break
        else:
            break
    with print_lock:
        print("thread4 pos ",pos4)
    




n=int(input("how many elements?"))
list5 = []
for i in range(1,n+1):
    list5.append(i)
ele = int(input("enter the element to be searched"))


t1 = threading.Thread(target=linsearch1, args = (list5,ele))
t2 = threading.Thread(target=linsearch2, args = (list5,ele))
t3 = threading.Thread(target=linsearch3, args = (list5,ele))
t4 = threading.Thread(target=linsearch4, args = (list5,ele))

start = time.time()
    
t1.start()
t3.start()
t2.start()
t4.start()

t1.join()
t3.join()
t2.join()
t4.join()

print("Time taken ",time.time()-start)