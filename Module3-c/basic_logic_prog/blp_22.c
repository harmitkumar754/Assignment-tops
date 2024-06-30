/*22Calculate compound interest(Compound Interest formula:
a. Formula to calculate compound interest annually is given by:
Amount= P(1 + R/100)t
b. Compound Interest = Amount – P*/


#include <stdio.h> 
#include<math.h> 
int main() 
{ 

double principal,rate,time,Amount,CI;
  
printf("\n Enter principal Amount : ");
scanf("%lf",&principal);
printf("\n Enter Rate : ");
scanf("%lf",&rate);
printf("\n Enter time: ");
scanf("%lf",&time);
Amount = principal * ((pow((1 + rate / 100), time))); 
CI = Amount - principal; 
printf("\ncompound interest annually is given by: %lf",Amount);
printf("\nCompound Interest is : %lf",CI); 
return 0; 
} 

