//17. Calculate person’s insurance premium based on salary
#include<stdio.h>
int main()
{
	float sal,ins;
	printf("Enter person's salary:");
	scanf("%f",&sal);
	ins=(10*sal)/100;
	
	printf("your 10%% insurance premium is %0.2f",ins);
	return 0;
}
