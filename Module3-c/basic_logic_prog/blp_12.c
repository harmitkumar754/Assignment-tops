/*12Accept number of students from user. I need to give 5 apples to each 
student. How many apples are required?*/
#include<stdio.h>
int main()
{
	int s,a;
	printf("Enter Nomber Of Student :");
	scanf("%d",&s);
	a=s*5;
	printf("1 student has to give %d apples",a);
	return 0;
	
}
