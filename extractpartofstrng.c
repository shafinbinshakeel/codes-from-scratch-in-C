#include<stdio.h>
#include<string.h>
int main()									//extract string from position & no of char & print
{
	char s[100];
	int i,j,l,n,m;
	printf("enter the string\n");
	gets(s);
	printf("enter starting point\n");
	scanf("%d",&m);
	printf("enter no of char\n");
	scanf("%d",&n);
	l=strlen(s);
	for(i=m-1;i<(m+n)-1;i++)
	{
		printf("%c",s[i]);
	}
}
