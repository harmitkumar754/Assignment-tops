/*19Write a program in C to calculate and print the electricity bill of a given 
customer. The customer ID, name, and unit consumed by the user should 
be captured from the keyboard to display the total amount to be paid to the 
customer. The charge are as follow :
 Unit            Charge/unit
 upto 350          @1.20
 350-600           @1.50
 600-800           @1.80
 800 and above     @2.00
*/
#include <stdio.h>

int main()
{
    int id;
    char name[50];
    float units,total;

    printf("Enter customer ID: ");
    scanf("%d", &id);

    printf("Enter customer name: ");
    scanf("%s", name);

    printf("Enter units consumed: ");
    scanf("%f", &units);

    if (units < 350) 
	{
        total= units*1.20;
    } 
	else if (units>=350 && units<600) 
	{
        total= units*1.50;
    } 
	else if (units>=600 && units<800)
	 {
        total= units*1.80;
     } 
	 else if (units>=800)
	 {
        total= units*2.00;
     }

    printf("\t\t\t\t\t*****Customer ID: %d*****\n",id);
    printf("\n");
    printf("\t\t\t\t-->Customer Name: %s\n",name);
    printf("\t\t\t\t-->Units Consumed: %.2f\n",units);
    printf("\t\t\t\t\t\t\t_________\n");
    printf("\t\t\t\t-->Total Amount to be Paid: %.2f\n",total);
	printf("\t\t\t\t\t\t\t_________");
    return 0;
}
