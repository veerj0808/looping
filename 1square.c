// To get squares of the given numbers

#include<stdio.h>
void main()
{
	int i,n,f=1;
	printf("enter the ending number \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=i*i;
		printf("square = %d\n",f);
	}	
}

