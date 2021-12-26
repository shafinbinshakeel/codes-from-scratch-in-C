#include<stdio.h>
int main()
{
	char s[100],a,z,A,Z;
	int i,lc=0,uc=0,d=0,sc=0;
	printf("enter the string\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			lc++;
		}
		else if(s[i]>='A' && s[i]<='Z')
		{
			uc++;
		}
		else if(s[i]>='0' && s[i]<='9')
		{
			d++;
		}
		else
		{
			sc++;
		}
	}
	printf("lower case are %d\nupper case are %d\ndigits are %d\nspecial characters are %d",lc,uc,d,sc);
}
