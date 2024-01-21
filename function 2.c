#include<stdio.h>
void fact(int a); //declaration 
void main()
{ 
  int f;
  printf("Enter your value \n");
  scanf("%d",&f);
  fact(f); 
   
}
void fact(int a)  //defination
{
	int f = 1,i;
	
for(i=1;i<=a;i++)
 
 f = f*i;
 printf("factorial of %d is %d \n ",a,f);
 
 } 
