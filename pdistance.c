#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2;
	float distance;
	printf("\n enter the x and y cordinates of the first point");
	scanf("%d%d",&x1,&y1);
	printf("\n enter the x and y cordinastes of the second point");
	scanf("%d%d",&x2,&y2);
	distance = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	printf("\n distance = %f,distance");
	return 0;
}
