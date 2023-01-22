#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two numbers-");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n the first number is -%d",a);
	printf("\n the second number is -%d",b);
	return 0;
	
}
