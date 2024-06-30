//7Find area of Rectangle Formula : A=wl

#include<stdio.h>
int main()
{
	float b,h,a;
	
	printf("enter Rectangle width:");
	scanf("%f",&b);
	printf("enter Rectangle length: ");
	scanf("%f",&h);
	
	a=b*h;
	printf("area of Rectangle %0.2f",a);
	return 0;
}
