//11WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
	int a;
	printf("Enter Number For Check even or odd:");
	scanf("%d",&a);
	(a%2==0)?printf("%d is even.",a):printf(" %d  is odd.",a);

	return 0;
}


