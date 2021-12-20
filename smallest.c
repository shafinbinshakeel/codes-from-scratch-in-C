// smallest no. in array 

#include<stdio.h>
int main()
{
	int a[10],n,i,small,pos;
	printf("enter the no  of times you want to run loop\n");
	scanf("%d",&n);
	printf("enter the elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	small=a[0];
	pos=0;
	for(i=1;i<n;i++)
	{
		if(small>a[i])
		small=a[i];
		pos =i;
	}
	printf("smallest no is %d\n",small);
	printf("position is %d",pos);
	}
