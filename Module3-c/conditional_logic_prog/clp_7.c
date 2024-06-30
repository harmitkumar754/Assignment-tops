//7 Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
	int m;
	printf("Enter the mark out of 100   : ");
	scanf("%d",&m);
	if(m>=33)
	{
		printf("Pass Percentage is %d %% ",m);
	}
	else if((m<33) && (m>=30))
	{
		int a,s;
		a=33-m;
		s=a+m;
		printf("Uphill Pass Percentage is %d + %d = %d ",m,a,s);
	}
	else
	{
		printf("Fail Percentage is %d %% ",m);
	}
	return 0;
}


