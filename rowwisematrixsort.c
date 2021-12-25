#include<stdio.h>
int main()
{
	int a[10][10],i,j,n,m,k,temp;
	printf("no of rows\n");
	scanf("%d",&n);
	printf("no of column\n");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("enter element: ");
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("display elements\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("transpose\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if((i!=j) && (i<j))
			{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
			}
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	printf("arranging\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=j+1;k<m;k++)
			{
					if(a[i][j]>a[i][k])
					{
		
						temp=a[i][j];
						a[i][j]=a[i][k];
						a[i][k]=temp;
					}
				}
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

printf("\n");
for(i=0;i<n;i++)
	{		
		for(j=0;j<m;j++)
		{
			if((i!=j) && (i<j))
			{
			temp=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=temp;
			}
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
