#include<stdio.h>
#include<conio.h>
int main()
{
	int n1,n2,n3;
	printf("\n enter the any three numbers");
	scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2&&n1>n3)
	printf("\n %d is the greater number",n1);
	else if(n2>n1&&n2>n3)
	printf("\n %d is the greater number",n2);
	else if(n3>n1&&n3>n2)
	printf("\n %d is the greater number",n3);
	else printf("\n three numbers are equal");
	return 0;
}
