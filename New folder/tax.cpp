#include<stdio.h>
#include<conio.h>
int main()
{
	double i,t,x;
	printf("\n enter your income");
	scanf("%d",&i);
	if(i<=150000)
	{printf("\n no tax");
	}
	else if(i>=150001&&i<=300000)
	{
		t=i*10/100;
		printf("\n tax is=%lf",t);
	}
	else if(i>=300001&&i<=500000)
	{
		x=i*20/100;
		printf("\n tax is =%lf",x);
		
	}
	return 0;
}
