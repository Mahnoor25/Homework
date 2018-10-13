#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<sys/wait.h>
int main()
{
	int a1[2];
	int a2[2];
	int a3[2];
	int a4[2];
	int a5[2];
	int a6[2];
	int a7[2];
	int a8[2];
	int a9[2];
	int a10[2];

	pipe(a1);
	pipe(a2);
	pipe(a3);
	pipe(a4);
	pipe(a5);
	pipe(a6);
	pipe(a7);
	pipe(a8);
	pipe(a9);
	pipe(a10);

	int cpid1 = fork();
	if(cpid1==0)
	{
		int sum=0;
		int st=0;
		int e=100;
		for(st=0;st<=e;st++)
		{
			sum=sum+st;
		}
		write(a1[1],&sum,sizeof(sum));
	}
	else
	{
		int cpid2= fork();
		if(cpid2==0)
		{
			int sum=0;
			int st=101;
			int e=200;
			for(st=101;st<=e;st++)
			{
				sum=sum+st;
			}
			write(a2[1],&sum,sizeof(sum));
		}
		else
		{
			int cpid3= fork();
			if(cpid3==0)
			{
				int sum=0;
				int st=201;
				int e=300;
				for(st=201;st<=e;st++)
				{
					sum=sum+st;
				}
				write(a3[1],&sum,sizeof(sum));
			}
			else
			{
				int cpid4= fork();
				if(cpid4==0)
				{
					int sum=0;
					int st=301;
					int e=400;
					for(st=301;st<=e;st++)
					{
						sum=sum+st;
					}
					write(a4[1],&sum,sizeof(sum));
				}
				else
				{
					int cpid5= fork();
					if(cpid5==0)
					{
						int sum=0;
						int st=401;
						int e=500;
						for(st=401;st<=e;st++)
						{
							sum=sum+st;
						}
						write(a5[1],&sum,sizeof(sum));
					}
					else
					{
						int cpid6= fork();
						if(cpid6==0)
						{
							int sum=0;
							int st=501;
							int e=600;
							for(st=501;st<=e;st++)
							{
								sum=sum+st;
							}
							write(a6[1],&sum,sizeof(sum));
						}
						else
						{
							int cpid7= fork();
							if(cpid7==0)
							{
								int sum=0;
								int st=601;
								int e=700;
								for(st=601;st<=e;st++)
								{
									sum=sum+st;
								}
								write(a7[1],&sum,sizeof(sum));
							}
							else
							{
								int cpid8= fork();
								if(cpid8==0)
								{
									int sum=0;
									int st=701;
									int e=800;
									for(st=701;st<=e;st++)
									{
										sum=sum+st;
									}
									write(a8[1],&sum,sizeof(sum));
								}
								else
								{
									int cpid9= fork();
									if(cpid9==0)
									{
										int sum=0;
										int st=801;
										int e=900;
										for(st=801;st<=e;st++)
										{
											sum=sum+st;
										}
										write(a9[1],&sum,sizeof(sum));
									}
									else
									{
										int cpid10= fork();
										if(cpid10==0)
										{
											int sum=0;
											int st=901;
											int e=1000;
											for(st=901;st<=e;st++)
											{
												sum=sum+st;
											}
											write(a10[1],&sum,sizeof(sum));
										}
										else
										{
											wait(NULL);
											wait(NULL);
											wait(NULL);
											wait(NULL);
											wait(NULL);
											wait(NULL);
											wait(NULL);
											wait(NULL);
											wait(NULL);
											wait(NULL);
											int sum1,sum2,sum3,sum4,sum5,sum6,sum7,sum8,sum9,sum10;
											int totalsum;
											read(a1[0],&sum1,sizeof(sum1));
											read(a2[0],&sum2,sizeof(sum2));
											read(a3[0],&sum3,sizeof(sum3));
											read(a4[0],&sum4,sizeof(sum4));
											read(a5[0],&sum5,sizeof(sum5));
											read(a6[0],&sum6,sizeof(sum6));
											read(a7[0],&sum7,sizeof(sum7));
											read(a8[0],&sum8,sizeof(sum8));
											read(a9[0],&sum9,sizeof(sum9));
											read(a10[0],&sum10,sizeof(sum10));
											printf("c1 sum= %d\n" ,sum1);
											printf("c2 sum= %d\n" ,sum2);
											printf("c3 sum= %d\n" ,sum3);
											printf("c4 sum= %d\n" ,sum4);
											printf("c5 sum= %d\n" ,sum5);
											printf("c6 sum= %d\n" ,sum6);
											printf("c7 sum= %d\n" ,sum7);
											printf("c8 sum= %d\n" ,sum8);
											printf("c9 sum= %d\n" ,sum9);
											printf("c10 sum= %d\n" ,sum10);
											totalsum=sum1+sum2+sum3+sum4+sum5+sum6+sum7+sum8+sum9+sum10;
											printf("Parent sum= ");
											printf("%d",totalsum);
											printf("\n");
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	
	return 0;
}