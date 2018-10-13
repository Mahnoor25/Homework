#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	for (int i=0;i<4;i++)
	{
		fork();
		printf("hello!");
	}
printf("exit");
}