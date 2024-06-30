//10WAP to check whether a number is negative, positive or zero.
#include<stdio.h>
int main()
{
	int a;
	printf("Enter Check whether Nomber:");
	scanf("%d",&a);
	if(a<0)
	{
		printf("%d is hitting",a);
	
	}
	else if(a>0)
	{
		printf("%d is cold",a);
	}
	else
	{
		printf("%d is Zero!!!",a);
	}
	return 0;
}

