/*23WAP to calculate swap 2 numbers with using of multiplication and division.*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter Nomber 1 :");
	scanf("%d",&a);
	printf("\nEnter Nomber 2 :");
	scanf("%d",&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\n\tAfter swaping No1:%d",a);
	printf("\n\tAfter swaping No2:%d",b);
	return 0;
	
	
	
	
}
