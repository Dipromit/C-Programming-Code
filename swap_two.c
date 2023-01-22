#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter the two numbers-");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("\n lthe first number is-%d",a);
	printf("\n lthe second number is-%d",b);
	return 0;
}
