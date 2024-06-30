/*16Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below:
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>
int main()
{
	float temp;
	printf("Enter Temperature In Centigrade : ");
	scanf("%f",&temp);
	if(temp<0)
	{
		printf("\nFreezing weather");
	}
	else if(temp>=0 && temp<=10)
	{
		printf("\nVery Cold weather");
	}
	else if(temp>10 && temp<=20)
	{
		printf("\nCold weather");
	}
	else if(temp>20 && temp<=30)
	{
		printf("\nNormal in Temp");
	}
	else if(temp>30 && temp<=40)
	{
		printf("\nIt's hot");
	}
	else if(temp>=40)
	{
		printf("\nIts Very Hot");
	}
	else
	{
		printf("\nEnter correct value!!!");
	}
	return 0;
}
