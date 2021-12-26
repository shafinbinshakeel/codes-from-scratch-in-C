#include<stdio.h>
#include<string.h>
int main()									//program to remove all duplicate char which appear more than one
{
	char s[100];
	int l,i,j,k;
	printf("enter the string\n");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(s[i]==s[j])
			{
				for(k=j;k<l;k++)
				{
					s[k]=s[k+1];
				}
				l--;
				k--;
			}
		}
		printf("%c",s[i]);
	}
}
