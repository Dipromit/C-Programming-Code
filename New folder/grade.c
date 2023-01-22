#include<stdio.h>
#include<conio.h>
int main()
{
	int m1,m2,m3,m4,total=0;
	float avg;
	printf("\n enter the marks of phycis");
	scanf("%d",&m1);
	printf("\n enter the marks of math");
	scanf("%d",&m2);
	printf("\n enter the number of biology");
	scanf("%d",&m3);
	printf("\n enter the number of computer science");
	scanf("%d",&m4);
	total=m1+m2+m3+m4;
	avg=total/4;
	printf("\n total number is=%d",total);
	printf("\n total average is=%d",avg);
	if(avg>=75)
	printf("\n star marks");
	else if(avg<75&&avg>60)
	printf("\n first divition");
	else if(avg<=60&&avg>50)
	printf("\n 2nd divition");
	else
	printf("\n fail");
	return 0;
}
