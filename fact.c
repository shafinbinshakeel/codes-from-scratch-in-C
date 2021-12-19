#include<stdio.h>
int main()
{
	int a,i,fact=1;
	printf("enter the no\n");
	scanf("%d",&a);
	
	for(i=1;i<=a;i++)
	{
		fact=fact*i;
	}
	printf("factorial is %d",fact);
	
}
