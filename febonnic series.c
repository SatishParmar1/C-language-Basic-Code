#include<stdio.h>

void main()
{
	int n,i,a;
	printf("enter the numbers \n ");
	scanf("%d",&n);
	
	printf("table of %d \n",n);
	
	for( i=1;i<=10;i++)
	{
		a = i*n;
		printf("%d*%d=%d \n",n,i,a);
	}
	getch();
}
