/*6.Write a C++ program to implement a class called Employee that has 
private member variables for name, employee ID, and salary. Include 
member functions to calculate and set salary based on employee 
performance. Using of constructor*/
#include<iostream>
using namespace std;
class Employee
{
	int eid;
	string nm;
	long salary;
	public :
		
		void setdata(int eid,string nm,long salary)
		{
			
			
			this->eid=eid;
			this->nm=nm;
			this->salary=salary;
			
		}
		void perfsal(long per)
		{
			this->salary+=(salary*per)/100;
		}
		void getdata()
		{
			cout<<"\n Employee Id ="<<eid;
			cout<<"\n Employee Name ="<<nm;
			cout<<"\n Employee Salary = "<<salary;
		}
};
int main()
{
	Employee e1;
	int eid,per;
	string nm;
	long salary;
	
	
	cout<<"\n Enter Employee Id = ";
	cin>>eid;
	cout<<"\n Enter Employee Name = ";
	cin>>nm;
	cout<<"\n Enter Employee Salary = ";
	cin>>salary;
	e1.setdata(eid,nm,salary);
	cout<<"\n Enter Performance in percentage = ";
	cin>>per;
	e1.perfsal(per);
	e1.getdata();
	return 0;
}


