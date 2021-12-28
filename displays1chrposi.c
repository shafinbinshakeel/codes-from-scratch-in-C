#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()									//display the first position in s1 where any char of s2 occur
{
	char s[100],t[100];
	int i,j,l,h;
	printf("enter the string\n");
	gets(s);
	printf("enter another string\n");
	gets(t);
	l=strlen(s);
	h=strlen(t);
	for(i=0;i<l;i++)
	{
		for(j=0;j<h;j++)
		{
			if(s[i]==t[j])
			{
				printf("%d",i+1);
				exit(0);
			}
		}
	}
}
