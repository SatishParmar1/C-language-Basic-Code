#include<stdio.h>
struct book
{
	char bname[50];
    int ISBN ;
    float cost;
};
void main()
{
	int n,i;
	printf("Enter no. of books \n");
	scanf("%d",&n);
	struct book b[n];
	
for(i=1;i<=n;i++)
{
	fflush(stdin);
	printf("Enter book name \n");
	scanf("%s",&b[i].bname[5]);
	printf("Enter ISBN & cost \n ");
	scanf("%d,%f",&b[i].ISBN,&b[i].cost);
}
for(i=1;i<=n;i++)
{ 
    printf("%s,%d,%f",b[i].bname,b[i].ISBN,b[i].cost);
 }
 } 
