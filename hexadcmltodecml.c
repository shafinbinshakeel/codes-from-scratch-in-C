#include<stdio.h>
#include<string.h>									//hexadecimal to decimal
#include<math.h>
int main()
{
	char h[20],k[20];
	int i,j,n,count=0,s=0;
	printf("enter the hexadecimal no :");
	gets(h);
	puts(h);
	printf(" rev is : %s\n",strrev(h));
	for(i=0;h[i]!='\0';i++)
	{
		if(h[i]>='A' && h[i]<='F')
		{
			h[i]=h[i]-55;
		}
		else
		{
		h[i]=h[i]-48;
		}
		printf("%d\n",h[i]);
	}
	for(i=0;h[i]!='\0';i++)
	{
		s+=(h[i]*(pow(16,count)));
		count++;
	}
	printf("decimal no is : %d",s);
}
