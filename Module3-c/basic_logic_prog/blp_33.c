//33 C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;
	printf("\n\tEnter Value : ");
	scanf("%d",&a);
	b=pow(a,1);
	printf("\n%d of 1 is %d",a,b);
	b=0;
	b=pow(a,2);
	printf("\n%d of 2 is %d",a,b);
	b=0;
	b=pow(a,3);
	printf("\n%d of 3 is %d",a,b);
	return 0;
}
