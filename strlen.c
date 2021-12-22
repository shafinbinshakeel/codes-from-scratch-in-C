#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	/*int i,count=0;
	printf("enter the string\n");
	gets(s);
	for(i=0;s[i]!='\0';i++)                                        //u can do in this way also
	{
		count++;
	}
	printf("%d",count);   */   
	
	int l;
	printf("enter the string\n");                                  //in this way also
	gets(s);
	l=strlen(s);
	printf("%d",l);  
	
/*	printf("enter he string\n");
	gets(s);                                                       //by this also
	printf("%d",strlen(s));     */
}
