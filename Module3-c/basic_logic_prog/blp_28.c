//28Convert years into days and months
#include<stdio.h>
int main()
{
	int d,y,m;
	printf("Enter year:");
	scanf("%d",&y);
	
	m=y*12;
	d=m*30;
	printf("day is %d",d);
	printf("\nmonth is %d",m);
	return 0;
}
