#include<stdio.h>
#include<conio.h>
int main()
{
	int num,digit;
	printf("enter any number-");
	scanf("%d",&num);
	digit=num%10;
	printf("\n the digit at ones place of %d is %d",num,digit);
	return 0;
}
