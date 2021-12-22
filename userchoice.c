#include<stdio.h>
int main()
{
	int a,b,sum=0;
	char c,y,n;
	do
	{
	printf("enter the number\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	
	printf("do you add (y/n)");
	scanf("\n%c",&c);
    if(c==y)
	printf("sum is %d\n",sum);
	}
	while(c=='y');

}
