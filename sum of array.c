#include<stdio.h>
void main()
{
	int i,j, a[3][3], b[3][3], c[3][3] ;
	
 printf("values of array a \n ");
 
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
printf("values of array b \n");
for(i=1;i<=3;i++)
{ 
   for(j=1;j<=3;j++)
     {
     	scanf("%d",&b[i][j]);
	 }
}
 
for(i=1;i<=3;i++)
{ 
   for(j=1;j<=3;j++)
     {
     	printf("%d \t",b[i][j]);
	 }
	 printf("\n");
}
printf("sum of array a and b are \n");

for(i=1;i<=3;i++)
{ 
   for(j=1;j<=3;j++)
     {
     	c[i][j] = a[i][j] + b[i][j];
	 }
}
 
for(i=1;i<=3;i++)
{ 
   for(j=1;j<=3;j++)
     {
     	printf("%d \t",c[i][j]);
	 }
	 printf("\n");
}
}
