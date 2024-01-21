#include<stdio.h>
void main()
{
int i,n,f = 1;
printf("enter the number \n");

scanf("%d",&n);

printf("list of %d natural number",n);

for( i = n; i>=1; i--)
{
f = f*i;
}
printf("f %d natural numbers is %d",n,f);
getch();	
}
