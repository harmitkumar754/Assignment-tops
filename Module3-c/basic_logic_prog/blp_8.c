//8Find circumference of Rectangle formula : C = 4 * a   or P = 2l + 2w


#include<stdio.h>
int main()
{
	float b,h,a;
	
	printf("enter Rectangle width:");
	scanf("%f",&b);
	printf("enter Rectangle length: ");
	scanf("%f",&h);
	
	a=(2*h)*(2*b);
	printf("circumference of Rectangle %0.2f",a);
	return 0;
}
