//12WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main()
{
	int a,b,c,m;
	printf("Enter Nomber 1 :");
	scanf("%d",&a);
	printf("Enter Nomber 2 :");
	scanf("%d",&b);
	printf("Enter Nomber 3 :");
	scanf("%d",&c);
	m=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("Largest number is %d.",m);
 
    return 0;
}
