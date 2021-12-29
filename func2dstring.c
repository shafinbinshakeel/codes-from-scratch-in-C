#include<stdio.h>
void display(char s[][20],int n)
{
	int i;
	printf("diplay of name are\n");
	for(i=0;i<n;i++)
	{
		printf("%s\n",s[i]);
	}
}
int main()
{
	char s[20][20],i;
	int n;
	printf("enter the no of names u want to print\n");
	scanf("%d",&n);
	printf("list of names are\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",s[i]);
	}
	display(s,n);
}
