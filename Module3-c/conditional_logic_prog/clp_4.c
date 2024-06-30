/*4WAP to make simple calculator (operation include Addition, Subtraction, 
Multiplication, Division, modulo) using conditional statement*/
#include<stdio.h>
int main()
{
	int a,b;
	char ch;
	float c;
	printf("\n\t\t\t\t\t****** SIMPLE CALCULATOR ******");
	printf("\n\t\t\tEnter Number 1:");
	scanf("%d",&a);
	printf("\n\t\t\tEnter Number 2:");
	scanf("%d",&b);
	printf("\n\t\t\t\t\t****** Press Key For Opration ******");
	printf("\n\t\t\tFor Addition Press = a  ");
	printf("\n\t\t\tFor Subtraction Press = s");
	printf("\n\t\t\tFor Multiplication Press = m");
	printf("\n\t\t\tFor Division Press = d");	
	printf("\n\t\t\tFor Modulo Press = y");
	 
	printf("\n\t\t\t\tEnter operation :");
    scanf(" %c", &ch);
	if(ch=='a')
	{
		c=a+b;
		printf("\n\t\t\t\t\t****Addition is %.2f:****",c);
	}
	if(ch=='s')
	{
		c=a-b;
		printf("\n\t\t\t\t\t****subtraction is %.2f:****",c);
	}
	if(ch=='m')
	{
		c=a*b;
		printf("\n\t\t\t\t\t****Multiplication is %.2f:****",c);
	}
	if(ch=='d')
	{
		c=a/b;
		printf("\n\t\t\t\t\t****Division is %.2f:****",c);
	}
	if(ch=='y')
	{
		c=a%b;
		printf("\n\t\t\t\t\t****Modulo is %.2f:****",c);
	}
	
	
	return 0;
}

