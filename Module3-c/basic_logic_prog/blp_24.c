//24. Accept 5 employees name and salary and count average and total salary
#include<stdio.h>
int main()
{
	float sal1,sal2,sal3,sal4,sal5,avg,total;
	char nm1[25],nm2[25],nm3[25],nm4[25],nm5[25];
	printf("\n\t Enter Employee name1 :");
	scanf("%s",&nm1);
	printf("\n\tEnter salary employee1 : ");
	scanf("%f",&sal1);
	printf("\n\t Enter Employee name2 : ");
	scanf("%s",&nm2);
	printf("\n\tEnter salary employee2 : ");
	scanf("%f",&sal2);
	printf("\n\t Enter Employee name3 : ");
	scanf("%s",&nm3);
	printf("\n\tEnter salary employee3 : ");
	scanf("%f",&sal3);
	printf("\n\t Enter Employee name4 : ");
	scanf("%s",&nm4);
	printf("\n\tEnter salary employee4 : ");
	scanf("%f",&sal4);
	printf("\n\t Enter Employee name5 :");
	scanf("%s",&nm5);
	printf("\n\tEnter salary employee5 : ");
	scanf("%f",&sal5);
	avg=(sal1+sal2+sal3+sal4+sal5)/5;
	total=sal1+sal2+sal3+sal4+sal5;
	printf("\n\t\t*************************************");
	printf("\n\t Average sal is %0.2f",avg);
	printf("\n\t Total sal is %0.2f",total);
	return 0;
}
