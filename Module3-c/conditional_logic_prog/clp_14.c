#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nEnter Number 1 :");
	scanf("%d",&a);
	printf("\nEnter Number 2 :");
	scanf("%d",&b);
	printf("\nEnter Number 3 :");
	scanf("%d",&c);
	 
	if(a>b && a>c )
	{
		printf("\n %d is Max Number.",a);
	}
	else if(b>c && b>a)
	{
		printf("\n %d is Max Number.",b);
	}
	else if(c>a && c>b)
	{
		printf("\n %d is Max Number.",c);
	}
	else
	{
		printf("\n  two same Number Not Found!!!.");
	}
	
}

