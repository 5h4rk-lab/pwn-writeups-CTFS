#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>
vuln()
{
    execve("/bin/sh", NULL, NULL);
    return 0;
}
main()
{
    char x[45];
    int i,j,k;
    gets(x);
    printf("well lets check if you can bypass me!!!");
}
