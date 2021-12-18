#include<stdio.h>
#include<string.h>
int main()									//program to add full stop in the end if string 
{
	char s[100],t[]=".";
	printf("enter the string\n");
	gets(s);
	int l,i;
	l=strlen(s);
	strcat(s,t);
	puts(s); ///dllfsdmgs
}
