//19.Calculate compound interest

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
printf("Compound Interest is : %lf",CI); 
return 0; 
} 

