/*6Write a C++ Program to show access to Private Public and Protected using 
Inheritance*/
#include<iostream>
using namespace std;
class Grandfather
{
	private:
	int a=10;
	protected:
	  int  b=20;
	  public:
	  int  c=30; 	
	   Grandfather()
	   {
	   	cout<<"\n Grandfather Class :";
	   	cout<<"A="<<a<<", B="<<b<<", C="<<c;
	   	
	   }
};
class Father:public Grandfather
{
	public :
	Father()
	{
		cout<<"\n Father Class :";
	   	cout<<"B="<<b<<", C="<<c;
	}
};
class Child:public Father
{ 
   public:
	Child()
	{
		cout<<"\n Child Class :";
	   	cout<<"B="<<b<<", C="<<c;
	}
};
int main()
{
	Child c1;
}
