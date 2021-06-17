#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>

int main(int argc , char* argv[])
{
    int input_fd, output_fd;
    if(argc != 3){
        printf("USAGE : mv file1 file2");
        return 1;
    }
    input_fd = link(argv[1], argv[2]);
    if(input_fd == -1)
    {
        perror("link error");
        return 2;
    }

    output_fd = unlink(argv[1]);
    if(output_fd == -1)
    {
        perror("unlink");
        return 3;
    }
    return 0;
}