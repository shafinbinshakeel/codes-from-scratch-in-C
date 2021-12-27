//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int n,q,r,a[15];
//	printf("enter the decimal no\n");
//	scanf("%d",&n);
//    int i=0;
//	if(n>9 && n<16)
//{
//n=(char)(n+55);
//printf("%c",n);
//exit(0);
//}
//else if(n<9)
//{
//printf("%d",n);
//exit(0);
//}
//	while(n>=16)
//	{
//		q=n/16;
//		r=n%16;
//		a[i]=r;
//		n=q;
//		i++;
//  if(q<16)
//	{
//		a[i]=q;
//		break;
//	}
//	}
//	int j;
//for(j=i;j>=0;j--)
//{	
//if(a[j]>9)
//{
//a[j]=(char)(a[j]+55);
//printf("%c",a[j]);
//}
//else
//printf("%d",a[j]);
//}
//}





#include<stdio.h>
int main()													//decimal to hexadecimal
{															//easy way
	int n,i,j,q,r;
	char h[20];
	printf("enter the decimal no :");
	scanf("%d",&n);
	q=n;
	while(q!=0)
	{
		r=q%16;
		if(r<10)
		{
			h[i]=r+48;
		}
		else
		{
			h[i]=r+55;
		}
		q=q/16;
		i++;
	}
	for(j=i;j>=0;j--)
	{
		printf("%c",h[j]);
	}
}
