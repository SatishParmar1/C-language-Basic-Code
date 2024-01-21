#include<stdio.h>
void ADD (); //declaration 
void even(); //declaration

void main()
{ 
   ADD();
   even();
}
void ADD()  //defination 
{
	int a,b,c;
	printf("Enter value of a and b \n ");
	 scanf("%d%d",&a,&b);
	 c = a + b;
	 printf("sum of a and b is %d \n  ",c);

}
 void even() //defination 
{ 
   int a;
   printf("Enter your value of a \n ");
   scanf("%d",&a);
   if(a%2==0)
     printf("number is even");
	 else 
	 printf("number is odd"); 
	 
	   
}
