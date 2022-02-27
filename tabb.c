#include<stdio.h>
int main()
{
	int a,i,c;
	
	printf("enter the no u want to print table\n");	
	scanf("%d",&a);
	
	for(i=1;i<=10;i++)
	{
		printf("  %d * %d = %d\n",a,i,a*i);
	}
}
