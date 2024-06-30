/*17Write a C program to check whether a triangle can be formed with the given 
values for the angles*/
#include <stdio.h> 
float main() 
{ 
float a,b,c; 
printf("enter three angles of triangle\n"); 
scanf("%f%f%f",&a,&b,&c); 
if((a+b+c)==180) 
printf("triangle formed"); 
else 
printf("triangle not formed"); 
return 0;
} 

