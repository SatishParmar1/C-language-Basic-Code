#include<stdio.h>
void main ()
{
	int i,j,a[i][j];
	printf("enter your array value \n ");
	
for(i=1;i<=3;i++)
{ 
   for(j=1;j<=3;j++)
     {
     	scanf("%d",&a[i][j]);
	 }
}
for(i=1;i<=3;i++)
{ 
   for(j=1;j<=3;j++)
     {
     	printf("%d \t",a[i][j]);
	 }
	 printf("\n");
}

for(i=1;i<=3;i++)
{ 
   for(j=1;j<=3;j++)
   {if( i == j)
   
   printf("%d",a[i][j]);
 }
}
}
