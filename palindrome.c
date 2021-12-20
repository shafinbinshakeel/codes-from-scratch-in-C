#include<stdio.h>
int main()
{
	int a,b,rev=0,num;
	printf("enetr the no\n");
	scanf("%d",&a);
	
	num=a;
	while(a!=0)
	{
		b=a%10;
		rev=rev*10+b;
		a=a/10;
}
	printf("reverse is %d\n",rev);
	
	if(num==rev)
	printf("palindrome\n");
	else 
	printf("not palindrome");


}
