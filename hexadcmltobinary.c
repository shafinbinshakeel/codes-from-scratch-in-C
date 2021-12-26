#include<stdio.h>
#include<string.h>									
#include<math.h>
int main()												//hexadecimal to binary through decimal
{
	char h[20];
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
	printf("decimal no is : %d\n",s);
	int r[20];
	for(i=0;s>0;i++)
	{
		r[i]=s%2;
		s=s/2;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",r[i]);
	}
}





//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//int main()
//{														//easy way
//	int i;
//	char h[50];
//	printf("enter the hexadecimal no:");
//	gets(h);
//	for(i=0;h[i]!='\0';i++)
//	{
//		switch(h[i])
//		{
//			case '0':
//				printf("0000");
//				break;
//			case '1':
//				printf("0001");
//				break;
//			case '2':
//				printf("0010");
//				break;
//			case '3':
//				printf("00011");
//				break;
//			case '4':
//				printf("0100");
//				break;
//			case '5':
//				printf("0101");
//				break;
//			case '6':
//				printf("0110");
//				break;						
//			case '7':
//				printf("0111");
//				break;
//			case '8':
//				printf("1000");
//				break;
//			case '9':
//				printf("1001");
//				break;
//			case 'A':
//				printf("1010");
//				break;
//			case 'B':
//				printf("1011");
//				break;
//			case 'C':
//				printf("1100");
//				break;
//			case 'D':
//				printf("1101");
//				break;
//			case 'E':
//				printf("1110");
//				break;
//			case 'F':
//				printf("1111");
//				break;
//			default:
//			printf("wrong choice");
//			break;										
//		}
//	}
//}
