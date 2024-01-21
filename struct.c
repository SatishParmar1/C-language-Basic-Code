#include<stdio.h>
struct student 
{
	char name [10];
	int rollno ,marks;
	}stu;
	
void main()
{
	struct student stu1 = {"satish",1,10};
	struct student stu2 = {"visal",2,7};
	struct student stu3 = {"saurabh",3,20};

printf("%s \t %s \t %s \n",stu1.name,stu2.name,stu3.name);
printf("%d \t %d \t %d \n",stu1.rollno,stu2.rollno,stu3.rollno);
printf("%d \t %d \t %d \n",stu1.marks,stu2.marks,stu3.marks);





}
