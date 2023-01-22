#include<stdio.h>
int main()
{
	char gen;
	int sal,sal2;
	printf("\n enter your gender code,male=m female=f");
	scanf("%c",&gen);
	printf("\n enter your salary");
	scanf("%d",&sal);
	if(gen==m&&sal<10000)
	sal2=sal2*5/100;
	printf("\n your bonous is %d rs"sal2);
	else if(gen==m&^&sal<10000)
	sal=sal*7/100;
	printf("\n your bonous is%d rs"sal2);
	else if(gen==f&&sal>10000)
	sal2=sal*7/100;
	printf("your bonous is %d",sal2);
	else if(gen==f&&sal<10000)
	sal=sal*9/100;
	printf("your bonous is%d"sal2);
	else
	printf("wrong");
	return 0;
}
