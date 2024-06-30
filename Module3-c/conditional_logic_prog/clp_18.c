/*.18 Write a C program to calculate profit and loss on a transactio*/
#include <stdio.h>

int main()
{
    int c,s,pr,lr;
    float p,pi,lp;

    printf("Enter the cost price: ");
    scanf("%d", &c);

    printf("Enter the selling price: ");
    scanf("%d", &s);

    if (s > c)
    {
    	pr=s-c;
    	p=(pr*100)/c;
        printf("Profit = %d,(%0.2f%%)",pr,p);
        
		
    }
    else if (s<c)
    {
    	lr=c-s;
    	lp=(lr*100)/c;
    	printf("Loss = %d,(%0.2f%%)",lr,lp);
       
    }
    else
    {
        printf("No profit no loss");
    }

    return 0;
}
