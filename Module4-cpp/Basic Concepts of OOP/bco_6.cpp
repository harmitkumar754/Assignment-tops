/*6. Write a C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.*/
#include<iostream>
using namespace std;
class Person
{
		private:
		string name,country;
		int age;
	    public:
		void setdata(string name,string country,int age)
      	{
		this->name=name;
		this->age=age;
		this->country=country;
		}
		void getdata()
		{
			cout<<"\n Name Is : "<<name;
			cout<<"\n Age Is : "<<age;
			cout<<"\n Country Is : "<<country;
		}
		
};
int main()
{
      Person p1;
      string name,country;
	  int age;
	  cout<<"\n Enter Name : ";
	  cin>>name;
	  cout<<"\n Enter Age is : ";
	  cin>>age;
	  cout<<"\n Enter Country : ";
	  cin>>country;
	  p1.setdata(name,country,age);
	  p1.getdata();
	return 0;
}
