#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main()
{
    
    int fork_ret = fork();
    if (fork_ret == 0)
        /* parent process */
        exit(0);
    else        
        /* child process */
        sleep(50);
    return 0;
}