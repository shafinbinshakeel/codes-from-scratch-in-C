#include<stdio.h>
int main()
{
	int a=0,b=1,c,i,sum;
	
	while(a+b<4000000)
	{
	c=a+b;
	a=b;
	b=c;                               
    printf("%d\n",c);                              
	sum=sum+c;
}
printf("%d",sum);
}
