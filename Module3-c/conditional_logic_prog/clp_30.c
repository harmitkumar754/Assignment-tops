/*30If bill exceeds Rs. 800 then a surcharge of 18% will be charged andthe 
minimum bill should be of Rs. 256/-*/
#include<stdio.h>
int main()
{
	int a;
	float s,n;
	printf("Enter Total Amount : ");
	scanf("%d",&a);
	if(a>0 && a<256)
	{
		printf("\nSorry ! We can't create a bill because the total amount is less than 256.");
	}
	else if(a>=256 && a<=800)
	{
		printf("\nTotal is %d",a);
	}
	else if(a>800)
	{
		s=(a*18)/100;
		n=s+a;
		printf("Total Amount = %d \n+ surcharge of 18%% = %0.2f",a,s);
		printf("\nNet Total = %0.2f",n);
	}
	else
	{
		printf("enter vallid Value...");
	}
	return 0;
}
	

