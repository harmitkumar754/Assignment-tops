/*Write a program to make Simple calculator (to make addition, subtraction, 
multiplication, division and modulo)*/
#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter No1:");
	scanf("%d",&a);
	printf("\nEnter No2:");
	scanf("%d",&b);
	
	printf("\nAddition is %d",a+b);
	
	printf("\nSubstraction is %d",a-b);
	printf("\nMultiplication is %d",a*b);	
	
	printf("\nDivision is %d",a/b);
	
	printf("\nModule  is %d",a%b);
	
}
