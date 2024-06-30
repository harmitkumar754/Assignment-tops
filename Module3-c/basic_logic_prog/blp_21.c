/*21Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
and without using 3rd variable*/
#include<stdio.h>
int main()
{
	printf("\n\t\t**********with using 3rd variable swaping**********");
	int a,b,c;
	printf("\nEnter Nomber 1 :");
	scanf("%d",&a);
	printf("\nEnter Nomber 2 :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n\tAfter swaping No1:%d",a);
	printf("\n\tAfter swaping No2:%d",b);
	printf("\n\t\t**********without using 3rd variable swaping**********");
	printf("\nEnter Nomber 1 :");
	scanf("%d",&a);
	printf("\nEnter Nomber 2 :");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n\tAfter swaping No1:%d",a);
	printf("\n\tAfter swaping No2:%d",b);
	return 0;
	
	
	
	
}
