#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int num[1000];
int range=100;
void * func(void *arg)
{
	int s=(int)arg;
	int f=s+range;
	int sum=0,i=0;
	for(i=s;i<=f;i++)
	{
		sum=sum+num[i];
	}
	return ((void*)sum);
}
int main()
{
	int Total[10];
	int GTotal=0;
	for(int i=0;i<=1000;i++)
	{
		num[i]=i;
	}
	pthread_t thread_t[10];
	for(int i=0;i<10;i++)
	{
		pthread_create(&thread_t[i],NULL,func,(void*)(i*100));
	}
	for(int i=0;i<10;i++)
	{
		pthread_join(thread_t[i], (void**)&Total[i]);
	}
	for(int i=0;i<10;i++)
	{
		printf("\nSub Total:  %d\n",Total[i]);
		GTotal=GTotal+Total[i];
	}
	printf("\nGrand Total:  %d\n",GTotal);
	return 0;
}