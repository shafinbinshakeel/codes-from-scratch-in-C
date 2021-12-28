#include<stdio.h>
int main()
{
	char s[100];
	int i;
	printf("enter the string\n");
	gets(s);
	printf("\ndecrypted string is\n");
	for(i=0;s[i]!='\0';i++)
	{
		s[i]=s[i]+4;
	}
	puts(s);
		printf("\nencrypted string is\n");
	for(i=0;s[i]!='\0';i++)
	{
		s[i]=s[i]-4;
	}
	puts(s);
}
