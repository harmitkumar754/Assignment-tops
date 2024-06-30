/*9C Program to Check Uppercase or Lowercase or Digit or Special 
Character*/
#include <stdio.h>
int main()
{
char ch;
printf("Enter any character: \n");
scanf("%c", &ch);
if(ch >= 'A' && ch <= 'Z')
{
printf(" '%c' is uppercase alphabet.", ch);
}
else
if(ch >= 'a' && ch <= 'z')
{
printf(" '%c' is lowercase alphabet.", ch);
}
else
if(ch >= '0' && ch <= '9')
{
printf(" '%c' is digit.", ch);
}
else
{
printf(" '%c' is special character.", ch);
}
return 0;
}
/*
#include<stdio.h>
int main(){
   char ch;
   printf("enter a character:");
   scanf("%c",&ch);
   if(ch >= 65 && ch <= 90)
      printf("Upper Case Letter");
   else if(ch >= 97 && ch <= 122)
      printf("Lower Case letter");
   else if(ch >= 48 && ch <= 57)
      printf("Number");
   else
      printf("Symbol");
   return 0;
}*/
