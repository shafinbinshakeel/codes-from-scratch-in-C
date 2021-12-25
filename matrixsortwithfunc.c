#include<stdio.h>
int a[10][10];
int sort(int n,int m)
{													///its complicated between rows and column thats y
	int temp,k,i,j;
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
}

int transpose(int n,int m)
{
	int temp=0,i,j;
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

int main()
{
	int i,j,k,n,m;
	printf("enter rows\n");
	scanf("%d",&n);
	printf("enter columns\n");
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
	printf("\n");
	transpose(m,n);
	printf("\n");
	sort(m,n);
	printf("\n");
	transpose(m,n);
	printf("\n");
	sort(m,n);
}
