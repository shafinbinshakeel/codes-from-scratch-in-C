#include<stdio.h>
int main()
{
	int i,j,a;
	printf("eneter the no of times loop run\n");
	scanf("%d",&a);
	for (i=1;i<a;i++)
	{
		for(j=1;j<a;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
