#include<thread>
#include<iostream>
#include<ctime>
#include<stdio.h>
#include<mutex>
#include<windows.h>
using namespace std;
long long n;
void linsearch1(int*,int);
void linsearch2(int*,int);
void linsearch3(int*,int);
void linsearch4(int*,int);
int stopthreads=0;
int main()
{
    int i,ele;
    double start;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int* a = new int[n];
    for(i=1;i<n+1;i++)
        a[i-1]=i;
    cout<<"Enter the element to be searched"<<endl;
    cin>>ele;
    start = time(0);
    thread t1(linsearch1,a,ele);
    thread t2(linsearch2,a,ele);
    thread t3(linsearch3,a,ele);
    thread t4(linsearch4,a,ele);
    t1.join();
    t2.join();
    t3.join();
    t4.join();
    cout<<endl<<time(0)-start;
    return 0;
}
void linsearch1(int* a1,int ele1)
{
    int pos1=-1,i,mid;
    mutex m;
    mid = int(((n+1)/2)-1);
    for(i=0;i<=mid;i++)
    {
        if(stopthreads==0)
        {

            if(a1[i]==ele1)
            {
                pos1=i;
                stopthreads=1;
                break;
            }
        }
        else
        {
         Sleep(100);
         break;
        }
    }
    m.lock();
    cout<<"thread1 pos1 "<<pos1<<endl;
    m.unlock();
}
void linsearch2(int* a2,int ele2)
{
    mutex m;
    int pos2=-1,i,mid;
    mid = int(((n+1)/2)-1);
    for(i=mid;i<n;i++)
    {
        if(stopthreads==0)
        {
            if(a2[i]==ele2)
            {
                pos2=i;
                stopthreads=1;
                break;
            }
        }
        else
        {
            Sleep(100);
            break;
        }
    }
    m.lock();
    cout<<"thread2 pos2 "<<pos2<<endl;
    m.unlock();
}
void linsearch3(int* a3,int ele3)
{
    mutex m;
    int pos3=-1,i,mid;
    mid = int(((n+1)/2)-1);
    for(i=mid;i>=0;i--)
    {
        if(stopthreads==0)
        {

            if(a3[i]==ele3)
            {
                pos3=i;
                stopthreads=1;
                break;
            }
        }
        else
        {
            Sleep(100);
            break;
        }
    }
    m.lock();
    cout<<"thread3 pos3 "<<pos3<<endl;
    m.unlock();
}

void linsearch4(int* a4,int ele4)
{
    int pos4=-1,i,mid;
    mutex m;
    mid = int(((n+1)/2)-1);
    for(i=n-1;i>=mid;i--)
    {
        if(stopthreads==0)
        {

            if(a4[i]==ele4)
            {
                pos4=i;
                stopthreads=1;
                break;
            }
        }
        else
        {   Sleep(100);
            break;
        }
    }
    cout<<"thread4 pos4 "<<pos4<<endl;
}