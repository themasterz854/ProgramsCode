#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>

int main()
{
    int cpid;
    printf("My child can do whatever he wants\n");
    sleep(1);
    if((cpid = fork()) == 0)
    {
        printf("Child says he wants to join whitehatJr\n");
        printf("%d",cpid);
        sleep(2);
        printf("Child finishes.\n");
    }
    else
    {   
        wait(NULL);

        printf("child killed \n");
        sleep(1);
        printf("Parent working.....");
    }
    getchar();
    return 0;
}