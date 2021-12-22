#include<stdio.h>
int main()
{
	int a[50],n,i,j,temp;
	printf("enter the no of elements\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display of elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nsorted array\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("%d\t",a[i]);
	}
	int m;
	printf("\nenter the element you want to search\n");
	scanf("%d",&m);
	int mid,start=0,end=n-1;
	while(start<=end)
	{
		mid=(start+end)/2;
		if(a[mid]==m)
		{
			printf("\n%d element present at position %d\n",m,mid+1);
			break;
		}
		else if(a[mid]>m)
		{
			end=mid-1;
		}
		else
		{
			start=mid+1;
		}
	}
	if(start>end)
	{
		printf("element not found\n");
	}
}
