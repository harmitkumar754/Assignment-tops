/*31Write a program in C to read any Month Number in integer and display the 
number of days for this month.*/
#include<stdio.h>
int main()
{
	int a;
	printf("Enter Month Number : ");
	scanf("%d",&a);
if(a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10  || a == 12)
{
   printf("\nThis Month in 31 Days.");
}
else if (a == 4 || a == 6 || a == 9 || a == 11) 
{ 
        printf("\nThis Month in 30 Days."); 
} 
else if (a == 2) 
{ 
        printf("\nThis Month in 28\29 Days."); 
} 
else
{ 
        printf("Invalid Month."); 
} 
return 0;
}
