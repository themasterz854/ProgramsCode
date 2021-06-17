#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<wait.h>

int main(int argc,char* argv[])
{   
    printf("Inside main\n");
    int res = 1;
    pid_t pid = fork();
    if(pid < 0)
    {
        printf("Error");
        exit(0);
    }
    else if(pid == 0)
    {
        printf("Inside child process, PID = %d\n",getpid());
        execl("./app","app1",argv[1],NULL);
    }
    else
    {
        printf("Inside parent process,PID = %d\n",getpid());
        wait(&res);

        if(WIFEXITED(res) == 1)
        {
            printf("Terminates normally");
        }
        else
        {
            printf("Abnormal termination");
            exit(0);
        }
    }
}