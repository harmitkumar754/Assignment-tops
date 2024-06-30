//5Check Number Is Positive or Negative
#include<stdio.h>
int main()
{
	int a;
	printf("Enter Check Number:");
	scanf("%d",&a);
	if(a<0)
	{
		printf("%d is Negative Number",a);
	
	}
	else if(a>0)
	{
		printf("%d is Positive Number",a);
	}
	else
	{
		printf("%d is Zero!!!",a);
	}
	return 0;
}

