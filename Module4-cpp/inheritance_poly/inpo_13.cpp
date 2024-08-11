/*13. Write a program to find the max number from given two numbers 
using friend function*/
#include<iostream>
using namespace std;
class Max
{
	private :
		int a,b;
	public :
	   Max(int a,int b)	
	   {
	   	this->a=a;
	   	this->b=b;
	   }
	   friend void display(Max &s1);
};
void display(Max &s1)
{
	if(s1.a>s1.b)
	{
			cout<<"Max No 1 = "<<s1.a;
	}
	else if(s1.a<s1.b)
	{
		cout<<"\nMax no 2 = "<<s1.b;
	}
	else
	{
	cout<<"\nBoth Are Same = "<<s1.b;
	}
	
	
	
}
int main()
{
	int a,b;
	cout<<"\nEnter No1 = ";
	cin>>a;
	cout<<"\nEnter No2 = ";
	cin>>b;
	Max obj(a,b);
	display(obj);
}
