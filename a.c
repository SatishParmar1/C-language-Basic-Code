// write a program using structure employ with variavble code, name, salary, make use
// of function(passing parameter) structure to display imformation an enploy

#include<stdio.h>
struct employ
{
	int code;
	char name [30];
	float salary;
	
};

  void main()
  {  
    int i,j;
    struct employ E;
    for(i=1;i<=3;i++)
    {
    for(i=1;i<=2;i++)
    {    
     printf("Enter Employ code \n ");
     for(j=1;j<=i;j++)
	    {
		  scanf("%d",&E.code);
	     }
	printf("Enter Employ name \n ");
	for(j=1;j<=i;j++)
     	{
	scanf("%s",&E.name);
	}
	printf("Enter Employ salary \n ");
	for(j=1;j<=i;j++)
	    {
	scanf("%f",&E.salary);
	 }
	
}
printf("\n");
	 printf("%d \t ",E.code);
     printf("%s \t ",E.name);
     printf("%f \n ",E.salary);
}
}
