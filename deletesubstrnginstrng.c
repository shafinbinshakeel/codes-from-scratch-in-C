#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()												//delete substring in a string
{
	char s[100],t[100],i,j,l,h,count=0;
	printf("enter the string\n");
	gets(s);
	l=strlen(s);
	printf("enter the sub string\n");
	gets(t);
	h=strlen(t);
	while(s[i]!='\0')
	{
		if(s[i]==t[j])
		{
			count++;
			j++;
			if(strlen(t)==count)
			{
				printf("position of char %d\n",i);
				printf("string found\n");
				for(j=i+1;j<l;j++)
				{
					s[j-h]=s[j];
				}
				for(i=0;i<l-h;i++)
				{
					printf("%c",s[i]);
				}
				exit(0);
			}
		}
		else
		{ 
			count=0;
			j=0;
		}
		i++;
	}
	if(count==0)
		{
			printf("not found\n");
		}
}
