#include<stdio.h>
int main()
{
	int a[10],i,b,flag=0;
	printf("enter the array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the no u want to check\n");
	scanf("%d",&b);
	for(i=0;i<=5;i++)
	{
		if(b==a[i])
		flag=1;
	}
	if(flag)
	{
		printf("no is present");
	}
	else{
		printf("not present");
	}
}
