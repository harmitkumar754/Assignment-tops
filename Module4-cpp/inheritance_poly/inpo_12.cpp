/*12. Write a program to swap the two numbers using friend function 
without using third variable*/
#include<iostream>
using namespace std;
class Swap
{
	private :
		int a,b;
	public :
	   Swap(int a,int b)	
	   {
	   	this->a=a;
	   	this->b=b;
	   }
	   friend void display(Swap &s1);
};
void display(Swap &s1)
{
	s1.a=s1.a+s1.b;
	s1.b=s1.a-s1.b;
	s1.a=s1.a-s1.b;
	cout<<"Before Swap A = "<<s1.a;
	cout<<"\nBefore Swap B = "<<s1.b;
	
}
int main()
{
	int a,b;
	cout<<"\nEnter A = ";
	cin>>a;
	cout<<"\nEnter B = ";
	cin>>b;
	Swap obj(a,b);
	display(obj);
}
