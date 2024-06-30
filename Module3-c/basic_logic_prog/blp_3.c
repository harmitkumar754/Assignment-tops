//WAP to Find Area And Circumference of Circle (c=2pir and c=pirsquer)
#include<stdio.h>
int main()
{
	float r,c,pi=3.14;
	printf("enter Radius value");
	scanf("%f",&r);
	c=2*pi*r;
//	c=pi*(r*r);
	printf("\n Circumference of Circle is %0.2f",c);
	return 0;
	
}
