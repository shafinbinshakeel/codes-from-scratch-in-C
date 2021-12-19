#include<stdio.h>
int main()
{
	int a,count=0;
	printf("enter the number\n");
	scanf("%d",&a);
	 while(a>=1)
	 {
	 	a=a/10;
	 	count++;
	 }
	 printf("%d",count);
}
