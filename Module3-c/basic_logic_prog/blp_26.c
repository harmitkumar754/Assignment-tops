//26Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main()
{
	float f,c;
	printf("Enter Fahrenheit Temparature ");
	scanf("%f",&f);
	 c=(f-32)*5/9 ;
	 printf("\n  Celsius Temparature is %f ",c);
	 
}
