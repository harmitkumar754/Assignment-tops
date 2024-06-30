/*32Write a C program to input basic salary of an employee and calculateits 
Gross salary according to following:
Basic Salary <= 10000 : HRA = 20%, DA = 80% 
Basic Salary <= 20000 : HRA = 25%, DA = 90%
Basic Salary > 20000 : HRA = 30%, DA = 95%\*/
#include<stdio.h>
int main()
{
	float b,h,d,a ;
	printf("Enter Basic Salary : ");
	scanf("%f",&b);
	if(b>=0 && b<=10000)
	{
		h=(b*20)/100;
		d=(b*80)/100;
		a=b+h+d;
		printf("Your Gross salary : %0.2f",a);	
	}
	else if(b>10000 && b<=20000)
	{
		h=(b*25)/100;
		d=(b*90)/100;
		a=b+h+d;
		printf("Your Gross salary : %0.2f",a);	
	}
	else if(b>20000)
	{
		h=(b*30)/100;
		d=(b*95)/100;
		a=b+h+d;
		printf("Your Gross salary : %0.2f",a);	
	}
	else
	{
		printf("Invallid input!!!");
	}
	return 0;
	
}

