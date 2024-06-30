/*1Write a C program to accept two integers and check whether they are equal 
or not*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter No1:");
	scanf("%d",&a);
	printf("Enter No2:");
	scanf("%d",&b);
	if(a==b)
	{
		printf("They Are Equal, %d and %d",a,b);
	}
	else
	{
		printf("They Are Not Equal, %d and %d",a,b);
	}
	return 0;
}
