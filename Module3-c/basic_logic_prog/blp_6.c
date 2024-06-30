//6Find area of Triangle Formula : A = 1/2 × b × h
#include<stdio.h>
int main()
{
	float b,h,a;
	
	printf("enter triagle hight:");
	scanf("%f",&h);
	printf("enter triagle base: ");
	scanf("%f",&b);
	
	a=0.5*b*h;
	printf("area of Triangle %0.2f",a);
	return 0;
}
