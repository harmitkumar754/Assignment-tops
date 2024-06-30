/*33WAP to input the week number and print week day*/
#include <stdio.h>

int main()
{
    int a;
    printf("Enter week number (1-7): ");
    scanf("%d", &a);


    if(a == 1)
    {
        printf("Monday");
    }
    else if(a == 2)
    {
        printf("Tuesday");
    }
    else if(a == 3)
    {
        printf("Wednesday");
    }
    else if(a == 4)
    {
        printf("Thursday");
    }
    else if(a == 5)
    {
        printf("Friday");
    }
    else if(a == 6)
    {
        printf("Saturday");
    }
    else if(a == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input!! Please enter week number between 1-7.");
    }

    return 0;
}
