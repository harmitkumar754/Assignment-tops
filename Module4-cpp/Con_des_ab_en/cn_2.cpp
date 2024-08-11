/*2. Write a program of Addition, Subtraction, Division, Multiplication using 
constructor*/
#include<iostream>
using namespace std;
class Calc
{ 
   public:
	Calc(int a,int b)
	{
		cout<<"\n Addition : "<<a+b;
		cout<<"\n Subtraction : "<<a-b;
		cout<<"\n Multiplication : "<<a*b;
		cout<<"\n Division : "<<a/b;
		
	}
	
};
int main()
{
	int a,b;
	cout<<"\n Enter No 1 : ";
	cin>>a;
	cout<<"\n Enter No 2 : ";
	cin>>b;
	Calc c1(a,b);
}
