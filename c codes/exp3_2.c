#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
    fork();
    fork();
    usleep(1);
    printf("Process %d’s parent process ID is %d\n", getpid(), getpid());
    sleep(2);

    return 0;
}