//30WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	int d,y,m;
	printf("Enter year:");
	scanf("%d",&y);
	m=y*12;
	d=m*30;
	y=d/360;
	printf("day is %d",d);
	printf("\nyear is %d",y);
	
	return 0;
}
