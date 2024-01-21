#include<stdio.h>

void main()
{
	int i,j;
	
	printf("Enter the number \n");
	
	scanf("%d",&i);
	
	for(i = 1; i<=10;i++)
	{
	  for(j = 1;j<=i;j++)
	  {
	  	printf("*");
	  }
	  printf("\n");
	}
	getch();
}
