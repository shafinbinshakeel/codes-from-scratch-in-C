#include<stdio.h>
int display(int a[][20],int n,int m)
{												//function 2d arraay display of elements
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int a[20][20],i,j,n,m;
	printf("enter the no of rows\n");
	scanf("%d",&n);
	printf("enter the no of column\n");
	scanf("%d",&m);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	display(a,n,m);
}
