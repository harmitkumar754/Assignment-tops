//1. Write a program of to swap the two values using template
#include<iostream>
using namespace std;
template<typename T>
void swapvalues(T &a,T &b)
{
	T temp = a;
	a=b;
	b=temp;
}
int main()
{
	int x = 10,y = 20;
	cout<<"\n value of x before swapping = "<<x;
	cout<<"\n value of y before swapping = "<<y;
	swapvalues(x,y);
	cout<<"\n value of x after swapping = "<<x;
	cout<<"\n value of y after swapping = "<<y;
	
	cout<<"\n";
	
	float p = 10.10,q = 20.20;
	cout<<"\n value of p before swapping = "<<p;
	cout<<"\n value of q before swapping = "<<q;
	swapvalues(p,q);
	cout<<"\n value of p after swapping = "<<p;
	cout<<"\n value of q after swapping = "<<q;
	
	cout<<"\n";
	
	char c = 'a',d = 'b';
	cout<<"\n value of a before swapping = "<<c;
	cout<<"\n value of b before swapping = "<<d;
	swapvalues(c,d);
	cout<<"\n value of a after swapping = "<<c;
	cout<<"\n value of b after swapping = "<<d;
}
