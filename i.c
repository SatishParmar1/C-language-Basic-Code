#include<stdio.h>
struct student
{
	char name[60];
	int id;
	float sal;
	
};
void main()
{
	int n,i;
	printf("the no of student are\n");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("name\n");
		scanf("%s",s[i].name);
		printf("enter the id and sal");
		scanf("%d%f",&s[i].id,&s[i].sal);
	}
	printf("name\tid\tsalary\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%d\t%f\n",s[i].name,s[i].id,s[i].sal);
	 } 
}
