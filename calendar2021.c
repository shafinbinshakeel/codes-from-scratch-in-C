#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,g,i,f,rem,sum,d=0,e=0;
	printf("enter the date\n");
	scanf("%d",&a);
	printf("enter month no.\n");
	printf("1. jan\n2. feb\n3. mar\n4. april\n5. may\n6. june\n7. july\n8. aug\n9. sep\n10. oct\n11. nov\n12. dec\n");
	scanf("%d",&b);
	switch(b)
	{
		case 1:printf("jan\n");
		if(b==1)
		e=e+1;
		break;
		case 2:printf("feb\n");
		if(b==2)
		e=e+4;
		break;
		case 3:printf("mar\n");
		if(b==3)
		e=e+4;
		break;
		case 4:printf("april\n");
		if(b==4)
		e=e+0;
		break;
		case 5:printf("may\n");
		if(b==5)
		e=e+2;
		break;
		case 6:printf("jun\n");
		if(b==6)
		e=e+5;
		break;
		case 7:printf("jul\n");
		if(b==7)
		e=e+0;
		break;
		case 8:printf("aug\n");
		if(b==8)
		e=e+3;
		break;
		case 9:printf("sep\n");
		if(b==9)
		e=e+6;
		break;
		case 10:printf("oct\n");
		if(b==10)
		e=e+1;
		break;
		case 11:printf("nov\n");
		if(b==11)
		e=e+4;
		break;
		case 12:printf("dec\n");
		if(b==12)
		e=e+6;
		break;
		default:printf("not valid month\n");
		break;   
	}  
	printf("enter the year\n");
	scanf("%d",&c);
	if(c!=2021)
	{
		printf("it's not a calendar for the year %d",c);
		exit(0);
	}
	if(a>7 && a<31)
	{
		rem=a%7;
		sum=rem+e+4;
		if(sum==1)
		{
			printf("sunday\n");
		}
		else if(sum==2)
		{
			printf("monday\n");
		}
		else if(sum==3)
		{
			printf("tuesday\n");
		}
		else if(sum==4)
		{
			printf("wednesday\n");
		}
		else if(sum==5)
		{
			printf("thursday\n");
		}
		else if(sum==6)
		{
			printf("friday\n");
		}
		else if(sum==7)
		{
			printf("saturday\n");
		}
		else
		f=sum%7;
		if(f==1)
		{
			printf("sunday\n");
		}
		else if(f==2)
		{
			printf("monday\n");
		}
		else if(f==3)
		{
			printf("tuesday\n");
		}
		else if(f==4)
		{
			printf("wednesday\n");
		}
		else if(f==5)
		{
			printf("thursday\n");
		}
		else if(f==6)
		{
			printf("friday\n");
		}
		else if(f==7)
		{
			printf("saturday\n");
		}
	}
			else if(a<=7)
	{
		d=d+a;
		sum=d+e+4;
		if(sum==1)
		{
			printf("sunday\n");
		}
		else if(sum==2)
		{
			printf("monday\n");
		}
		else if(sum==3)
		{
			printf("tuesday\n");
		}
		else if(sum==4)
		{
			printf("wednesday\n");
		}
		else if(sum==5)
		{
			printf("thursday\n");
		}
		else if(sum==6)
		{
			printf("friday\n");
		}
		else if(sum==7)
		{
			printf("saturday\n");
		}
		else
		{
			g=sum%7;
			if(g==1)
		{
			printf("sunday\n");
		}
		else if(g==2)
		{
			printf("monday\n");
		}
		else if(g==3)
		{
			printf("tuesday\n");
		}
		else if(g==4)
		{
			printf("wednesday\n");
		}
		else if(g==5)
		{
			printf("thursday\n");
		}
		else if(g==6)
		{
			printf("friday\n");
		}
		else if(g==7)
		{
			printf("saturday\n");
		}
		}
	}
	else
	{
		printf("date is not vaid\n");
	}
	//printf("the day on %d %d 2021 is %c",a,b,);
	return 0;
}
