#include<stdio.h>
#include<string.h>
int main()										//extract left part of string & print
{
	char s[100];
	int i,j,n;
	printf("enter string\n");
	gets(s);
	printf("enter the no of char\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("%c",s[i]);
	}
}




//#include<stdio.h>
//#include<string.h>
//int main()									//extract right part of string & print easy way 
//{
//	char s[100];
//	int i,j,l,n;
//	printf("enter the string\n");
//	gets(s);
//	printf("enter the no of char\n");
//	scanf("%d",&n);
//	l=strlen(s);
//	for(i=l-n;i<l;i++)
//	{
//		printf("%c",s[i]);
//	}
//}




//#include<stdio.h>
//#include<string.h>
//int main()											//extract right part of string & print alternate way
//{
//	char s[100],t[100];
//	int i,n;
//	printf("enter the string\n");
//	gets(s);
//	printf("enter the characters u want to extract\n");
//	scanf("%d",&n);
//	strrev(s);
//	for(i=0;i<n;i++)
//	{
//		t[i]=s[i];
//	}
//	strrev(t);
//	puts(t);
//}
