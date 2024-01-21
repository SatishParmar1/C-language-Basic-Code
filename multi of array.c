#include<stdio.h>
void main()
{
	int i,j,k, a[2][2], b[2][2], c[2][2] ;
	
 printf("values of array a \n ");
 
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
printf("values of array b \n");
for(i=1;i<=2;i++)
{ 
   for(j=1;j<=2;j++)
     {
     	scanf("%d",&b[i][j]);
	 }
}
 
for(i=1;i<=2;i++)
{ 
   for(j=1;j<=2;j++)
     {
     	printf("%d \t",b[i][j]);
	 }
	 printf("\n");
}
printf("multification of array a and b are \n");

 
  
for(i=1;i<=2;i++)
{ 
   for(j=1;j<=2;j++)
     {  c[i][j] = 0;
     	for(k=1;k<=2;k++)
     	{
		   c[i][j] += a[i][k] * b[k][j];
	    }
	}
}
 
for(i=1;i<=2;i++)
{ 
   for(j=1;j<=2;j++)
     {  
     	
     	
		 printf("%d \t",c[i][j]);
		  
	}
	 printf("\n");
}
getch();
}
