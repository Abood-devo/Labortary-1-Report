#include <unistd.h>
#include <stdio.h>

void main()
{
    execl("/bin/ls", "ls", NULL);
    printf("What happened?\n");
}