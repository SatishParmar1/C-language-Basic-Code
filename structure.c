#include<stdio.h>
struct student 
{char name[10];
int rollno , marks ;
}stu;
void main ()
{ 
struct student stu1 = {" saurabh",1,10 };
struct student stu2 = {"vatshalya",2,9};
struct student stu3 = {"shivam",3,5};

printf("%s \t,%s \t ,%s \n ",stu1.name,stu2.name,stu3.name);
printf("%d \t \t, %d \t \t ,%d \n ",stu1.rollno,stu2.rollno,stu3.rollno);
printf("%d \t \t, %d \t \t, %d \n ",stu1.marks,stu2.marks,stu3.marks);
}

