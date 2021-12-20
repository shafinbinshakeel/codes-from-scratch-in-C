#include<stdio.h>
int main()
{
	int b,i,sum=0;
	int a[100];
	printf("enter the no of elements\n");
	scanf("%d",&b);
	printf("enter the no ");
	for(i=0;i<b;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("sum is %d",sum);
}
