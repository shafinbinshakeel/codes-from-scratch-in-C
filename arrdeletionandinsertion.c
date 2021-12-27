#include<stdio.h>
int main()
{
//	int a[100],i,n,pos;
//	printf("enter the no of elements\n");
//	scanf("%d",&n);
//	printf("enter the elements\n");							//program to delete element in an array
//	for(i=0;i<n;i++)
//	{                                          						
//		scanf("%d",&a[i]);
//	}
//	printf("enter the position u want to delete the element\n");          
//	scanf("%d",&pos);
//	if(pos>=n+1)
//	{
//		printf("deletion not possible\n");
//	}
//	else
//	{
//	for(i=pos-1;i<=n-1;i++)
//	{
//		a[i]=a[i+1];
//	}
//	printf("elements after deletion are\n");
//	for(i=0;i<n-1;i++)
//	{
//		printf("%d\n",a[i]);
//	}
//	}
	
	
	
	
	
	int a[100],n,m,i,pos,temp;
	printf("enter no of elements\n");
	scanf("%d",&n);
	printf("enter elements\n");							//to insert element in an array
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("position u want to insert element\n");
	scanf("%d",&pos);
	printf("enter element u want to insert\n");
	scanf("%d",&m);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
		a[pos-1]=m;
	printf("after insertion\n");
	for(i=0;i<=n;i++)
	{
			printf("%d\n",a[i]);
	}
}
