#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,area,s;
	printf("enter the three sides of the tringle");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area=%f",area);
	return 0;
}

