#include<stdio.h>
#include<string.h>															
#include<math.h>											//binary to hexadecimal
int main()
{
	long int a[20],i,n,rem,rev;
	printf("enter the no of digits\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element: ");
		scanf("%d",&a[i]);
	}
	printf("binary is: ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nreverse is: ");
	for(i=n-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
	printf("\n");
	
	int s=0,count=0;
	for(i=n-1;i>=0;i--)
	{
		s+=(a[i]*(pow(2,count)));
		count++;
	}
	printf("decimal no is: %d\n",s);
	
	char h[50],q,r,j;
//	int j;
	q=s;
	while(q!=0)
	{
		r=q%16;
		if(r<10)
		{
			h[j]=r+48;
		}
		else
		{
			h[j]=r+55;
		}
		q=q/16;
		j++;
	}
	printf("hexadecimal no is: ");
	for(i=j-1;i>=0;i--)
	{
		printf("%c",h[i]);
	}
}
