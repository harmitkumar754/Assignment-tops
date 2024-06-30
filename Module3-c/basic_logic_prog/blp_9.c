//9Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>
int main()
{
	float a,b,c,d;
	
	printf("enter side 1:");
	scanf("%f",&a);
	printf("enter side 2: ");
	scanf("%f",&b);
	printf("enter side 3: ");
	scanf("%f",&c);
	
	d=a+b+c;
	printf("circumference of Triangle %0.2f",d);
	return 0;
}
