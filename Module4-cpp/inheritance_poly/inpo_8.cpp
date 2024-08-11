/*8. Write a program to Mathematic operation like Addition, Subtraction, 
Multiplication, Division Of two number using different parameters and 
Function Overloading*/
#include<iostream>
using namespace std;
class Temp
{
	public:
		void calc(int a,int b)
		{
			cout<<"\n Addition is : "<<a+b;
		}
		void calc(double p,int q)
		{
			cout<<"\n subtraction is : "<<p-q;
		}
		void calc(int x,long y)
		{
			cout<<"\n Multiplication is : "<<x*y;
		}
		void calc(float m,float n)
		{
			cout<<"\n division is : "<<m/n;
		}
};
int main()
{
	Temp t1;
	int a,b,q,x;
	double p;
	long y;
	float m,n;
	cout<<"\nEnter no1 :";
	cin>>a;
	cout<<"\nEnter no2 :";
	cin>>b;
	p=a;
	q=b;
	x=a;
	y=b;
	m=a;
	n=b;
	t1.calc(a,b);
	t1.calc(p,q);
	t1.calc(m,n);
	t1.calc(x,y);
	
}

