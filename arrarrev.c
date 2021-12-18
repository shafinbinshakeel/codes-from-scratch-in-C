#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter the no\n");
	scanf("%d",&n);
	printf("enter elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("reverse the elements of array\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}
