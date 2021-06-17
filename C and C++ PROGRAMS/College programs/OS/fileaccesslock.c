#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<errno.h>

int main(int argc,char*  argv[])
{
    int fd;
    char buffer[255] = "\0";
    struct flock fvar;
    if(argc==1)
    {
        printf("usage %s filename\n",argv[0]);
        return 1;
    }
    if((fd = open(argv[1],O_RDWR)) == -1)
    {
        perror("open");
        exit(1);
    }
    fvar.l_type = F_WRLCK;
    fvar.l_whence =  SEEK_END;
    fvar.l_start = SEEK_END - 100;
    fvar.l_len = 100;
    printf("press enter to set lock");
    getchar();
    printf("trying to get lock....\n");
    while((fcntl(fd,F_SETLK,&fvar))  == -1)
    {
        fcntl(fd,F_GETLK,&fvar);
        printf("File locked by process (pid): %d", fvar.l_pid);
        getchar();
    }
    printf("locked\n");
    if((lseek(fd,SEEK_END - 50, SEEK_END)) == -1)
    {
        perror("lseek");
        exit(1);
    }
    if((read(fd,buffer,100)) == -1)
    {
        perror("read");
    }
    printf("data read from file .... \n");
    puts(buffer);
    printf("press enter to release the lock");
    getchar();
    fvar.l_type = F_UNLCK;
    fvar.l_whence = SEEK_SET;
    fvar.l_start = 0;
    fvar.l_len = 0;
    if((fcntl(fd,F_UNLCK,&fvar)) == -1)
    {
        perror("fcntl");
        exit(0);
    }
    printf("unlocked\n");
    close(fd);
    return 0;
}