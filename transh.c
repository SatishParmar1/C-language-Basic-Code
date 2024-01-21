#include<stdio.h>
void main()
{
	int i,j,a[2][2], t[2][2];
	
 printf("values of array are \n ");
 
for(i=1;i<=2;i++)
{ 
   for(j=1;j<=2;j++)
     {
     	scanf("%d",&a[i][j]);
	 }
}
 for(i=1;i<=2;i++)
{ 
   for(j=1;j<=2;j++)
     {
     	printf("%d \t",a[i][j]);
	 }
	 printf("\n");
}
printf("values of transport \n ");
for(i=1;i<=2;i++)
{ 
   for(j=1;j<=2;j++)
     {
     	t[i][j] = a[j][i];
	 }
}
 
for(i=1;i<=2;i++)
{ 
   for(j=1;j<=2;j++)
   {printf("%d \t",t[i][j]);
	}	
	printf("\n"); 
}
}
