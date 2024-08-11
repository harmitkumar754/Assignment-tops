/*3. Create a class person having members name and age. Derive a class student 
having member percentage. Derive another class teacher having member 
salary. Write necessary member function to initialize, read and write data. 
Write also Main function (Multiple Inheritance)*/
#include<iostream>
using namespace std;
class Person
{
	protected :
		string name;
		int age;
	public :
	void setdata1(string name,int age)
	{
		this->name=name;
		this->age=age;
	}	
};
class Student:public Person
{
	protected :
		long per;
	public :
	void setdata2(long per)
	{
		this->per=per;
	
	}	
};
class Teacher:public Student
{ 

	double salary;
	public :
	void setdata3(double salary)
	{
		this->salary=salary;
	
	}
	void display()
	{
	  cout<<"\n Name is = "<<name;
	  cout<<"\n Age is = "<<age;
	  cout<<"\n Percentile = "<<per;	
	  cout<<"\n Salary is = "<<salary;
	}	
};
int main()
{
    Teacher t1;
		string name;
		int age;
		long per;
		double salary;
	cout<<"\n Enter Name : ";
	cin>>name;
	cout<<"\n Enter Age : ";
	cin>>age;
	cout<<"\n Enter Salary : ";
	cin>>salary;
	cout<<"\n Enter Percentile : ";
	cin>>per;
	
	t1.setdata1(name,age);
	t1.setdata2(per);
	t1.setdata3(salary);
	t1.display();
	
}
