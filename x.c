//write a program using structure to read and print book name ,ISBN no , coast, and N no. of books? 

#include<stdio.h>
 struct book {
 	 char bname[20];
 	int isbn[20];
 	 float cost[20];
 };
  void main()
{
  	int n;
	int i,j;
  	 printf("Enter no of book \n ");
  	 scanf("%d",&n);
struct book b;
for(i=1;i<=n;i++)
    {
	printf("Enter Book name \n ");
  for(j=1;j<=i;j++)  
    {          
 	  scanf("%s",&b.bname);
    }
    printf("Enter ISBN no of book \n ");
    for(j=1;j<=i;j++)  
	{   
 	  scanf("%d",b.isbn);
    }
    printf("Enter Book cost \n ");
    for(j=1;j<=i;j++)  
    {
	  scanf("%f",b.cost);
    }
    printf("book name %s \t ",b.bname);
    printf("ISBN No %d \t ",b.bname);
    printf("Coast %f \n ",b.bname);
    
    printf("\n");
}
}
