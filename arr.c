#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("enter thr no ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
}
