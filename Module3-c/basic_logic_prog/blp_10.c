//10find the area of a rectangular prism formula : A=2(wl+hl+hw)
#include<stdio.h>
int main()
{
	float l,w,h,a;
	
	printf("enter rectangular prism length:");
	scanf("%f",&l);
	printf("enter rectangular prism width:");
	scanf("%f",&w);
	printf("enter rectangular prism hight:");
	scanf("%f",&h);
	
	a=2*((w*l)+(h*l)+(h*w));
	printf("area of a rectangular prism %0.2f",a);
	return 0;
}


