#include<stdio.h>
#include<conio.h>
int main()
{
	int y;
	printf("\n enter the any year");
	scanf("%d",&y);
	if((y%4==0)&&(y%100!=0)||(y%400==0))
	printf("\n %d this is the leaper year",y);
	else
	printf("\n %d this is not leaper year",y);
	return 0;
}
