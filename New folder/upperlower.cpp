#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("\n enter the any charecter");
	scanf("%c",&ch);
	if(ch>'A'&&ch<'Z')
	printf("\ enter the charecter is upper case.in lower case it is:%c",(ch+32));
	else
	printf("\n enter the number is lower case. in upper case it is:%c",(ch-32));
	return 0;
}
