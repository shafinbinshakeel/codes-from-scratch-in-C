#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
	{
		int a,i,j;
		double b,c,d;
		printf("Enter the no:\n");
		scanf("%d",&a);
		b=(pow(a,2));
		for(i=1;i<=b;i++)
		{
			c=(pow(i,2));
			for(j=1;j<=b;j++)
			{
				d=(pow(j,2));
				if((b==(c+d))||(b==(d-c)))
				{
					printf("Pythagoras triplets are:%d,%d,%d\n",a,i,j);
				    
				}
	
			}
		}
	}
