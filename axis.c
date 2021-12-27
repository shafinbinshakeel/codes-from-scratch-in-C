#include<stdio.h>
int main()
{
	int x,y;
	printf("enter the points of x axis\n");
	scanf("%d",&x);
	printf("enter thr points of y axis\n");
	scanf("%d",&y);
	
	if(y==00)									//you can do also like (x>=1 || x<=1 && y==0) it will give same output
	{
		printf("point is on x axis");
	}
	else if(x==0)
	{
		printf("point is on y axis");
	}
	else if(x==0 && y==0)
	{
		printf("point is on origin");
	}
	else
	printf("point neither lies on x axis nor y axis");
}
