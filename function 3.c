#include<stdio.h>
int multiply(int a,int b); //declaration 
int multiply(int a,int b)  //defination
{
	int c=1;
    c = a*b;
    return(c);
} 
void main()
{ 
  int a,b,z;
  printf("Enter your value for a and b \n");
  scanf("%d %d",&a,&b);
  z=multiply(a,b);
  printf("multification of a and b is  %d",z); 
   
}
