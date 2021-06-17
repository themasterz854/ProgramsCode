#include<stdio.h>
#include<pthread.h>
#include<string.h>
void checkprime(int *n)
{   
    int i,flag = 1;
    if(*n == 1 || *n == 0)
    {
        printf("%d is not a prime number\n", *n);
    }
    else
    {
        for(i=2;i <= *n/2; i++)
        {
            if(*n % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        {
            printf("%d is a prime number\n", *n);
        }
        else
        {
            printf("%d is not a prime number\n", *n);
        }
    }
}
int main()
{
    int a[100],i,n;
    pthread_t t[100];
    printf("Enter the number of numbers\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for(i = 0; i < n; i++ )
    { 
      scanf("%d",&a[i]);
    }
    for(i=0; i < n ;i++)
    {
      pthread_create(&t[i],NULL,(void *)checkprime, &a[i]);
    }
    for(i=0;i < n;i++)
    {
        pthread_join(t[i],NULL);
    }
    printf("Back in main\n");
    return 0;
}

