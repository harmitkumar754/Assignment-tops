/*20. Accept monthly salary from the user and deduct 10% insurance premium, 
10% loan installment find out of remaining salary.*/
#include<stdio.h>
int main()
{
	float a,c,d;
	printf("Enter Each Month Salary of Employee:");
	scanf("%f",&a);
	
	c=(a*10)/100;
	
	d=a-c-c;
	printf("\n remaining annual salary is %0.2f",d);
	return 0;
	
}
