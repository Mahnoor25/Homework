#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>

int main()
{
    int id;
    id=fork();

    if(id>0)
    {
        printf("Parent will sleep");
        sleep(10);
    }
    if(id==0)
        printf("I am child");
}
