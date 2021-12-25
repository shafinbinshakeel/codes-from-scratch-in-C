#include<stdio.h>
#include<math.h>
int main()
{
	int /*a[10][10],t[10][10],*/size,i,j,n,m,count=0,c=0;
	printf("enter rows and column\n");
	scanf("%d",/*&n,&m*/&size);
	int a[size][size],t[size][size];
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("enter element: ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("display element\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}		

	printf("transpose of matrix\n");
		for(i=0;i<size;i++)
		{
			for(j=0;j<size;j++)
			{
				t[i][j]=a[j][i];
				printf("%d\t",t[i][j]);
			}
			printf("\n");
		}
	int k,s[i][j];
	printf("multiplication of matrix\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			s[i][j]=0;
			for(k=0;k<size;k++)
			{
				s[i][j]=s[i][j]+a[i][k]*t[k][j];
			}
			printf("%d\t",s[i][j]);
		}
		printf("\n");
	}
		
	printf("\n");
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(i!=j && s[i][j]==0)
				{
					count++;
				}
				else if(i==j && s[i][j]==1)
				{
					c++;
				}
		}
	}
	if(count==(pow(size,2)-size) && c==size)                           //u can do it (size*size)-size also
	{
		printf("it is orthogonal matrix\n");
	}
	else
	{
		printf("not orthogonal  matrix\n");
	}
}
