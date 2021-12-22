#include<stdio.h>
int main()
{
	int a,i,j,k=65;
	printf("enter the no\n");
	scanf("%d",&a);
	for(i=a;i>=1;i--)
	{
		for(j=0;j<i;j++)
		{
			printf("%c",k+j);
		}
		printf("\n");
	}
}
