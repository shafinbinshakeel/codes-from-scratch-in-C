#include<stdio.h>
int main()
{
	char name[50],age[5],salary[10];
	printf("enter the name\n");
	gets(name);
	printf("enter the age\n");
	gets(age);
	printf("enter the salary\n");
	gets(salary);
	puts(name);                                            // u can do by this also by puts or by printf
	puts(age);
	puts(salary);
//	printf("name is %s\n",name);
//	printf("age is %s\n",age);
//	printf("salary is %s\n",salary);
}
