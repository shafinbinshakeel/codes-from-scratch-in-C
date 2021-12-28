#include<stdio.h>
#include<string.h>					
int main()										//delete single or more than 1 char in string
{
	char s[100],a;
	int i,j,l;
	printf("enter the string\n");
	gets(s);
	printf("enter the character u want to delete\n");
	scanf("%c",&a);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]==a)
		{
			for(j=i;j<l;j++)
			{
				s[j]=s[j+1];
			}
			l--;
			i--;
		}
	}
	printf("%s",s);
}
