#include<stdio.h>
struct employ 
{
    int code;
    char name[30];
    float salary;
}E;
void  main()
{
    int t,n,i,j;
    printf("Enter number of employ \n ");
    scanf("%d",&n);

struct employ E[n];
for(i=1;i<=n;i++)
{

    printf("Enter Employ code \n ");
    scanf("%d",&E[i].code);
    printf("Enter Employ name \n ");
    scanf("%s",E[i].name);
    printf("Enter Employ salary \n ");
    scanf("%f",&E[i].salary);
}
 for(i=1;i<=n;i++)
 { 
    for(j=1;j<=n;j++)
    {
    	 if(E[j].salary>E[j+1].salary)
		 {  
		    t=E[j].salary;
		    E[j].salary=E[j+1].salary;
		    E[j+1].salary=t;
		    
		 	 
		 }
    }
 } 
 
   
printf("----------------\n");

 for(i=1;i<=n;i++)
{  

  printf("%d \t ",E[i].code);
  printf("%s \t ",E[i].name);
  printf("%f \n ",E[i].salary);
}
}
