//10. Write a program to concatenate the two strings using Operator Overloading
#include<iostream>
#include<string.h>
using namespace std;
class Complex
{
	public :
		string real;
		Complex(string r)
		{
			real=r;
		}
		
         Complex() 
     	{
		real="";
     	} 
		void display()
		{
			cout<<"Concate String is = "<<real;
		}
		Complex operator +(Complex obj)
		{
			Complex temp;
			temp.real=real+obj.real;
			
			return temp;
		}
};
int main()
{
	string s1,s2;
	cout<<"Enter String 1 :";
	cin>>s1;
	cout<<"Enter String 2 :";
	cin>>s2;
	
	Complex c1(s1);
	Complex c2(s2);
	
	Complex c3=c1+c2;
	c3.display();
	
		return 0;
		
}
