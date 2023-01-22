#include<stdio.h>
#include<conio.h>
int main()
{
	int num1, num2,num3;
	printf("\n enter the any three numbers");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2>num3)
	{printf("\n greater number is=%d",num1);
	}else if(num2>num1>num3)
	{printf("\n greater number is=%d",num2);
	}
	else if(num3>num2>num1)
	{printf("\n greater number is=%d",num3);
	}
	return 0;
}
