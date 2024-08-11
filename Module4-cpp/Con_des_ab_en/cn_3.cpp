/*3.Write a C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables*/
#include<iostream>
using namespace std;
class Car
{
	int year;
	string company,model;
	public :
		
		void setdata(int year,string company,string model)
		{
			
			
			this->company=company;
			this->model=model;
			this->year=year;
			
		}
		void getdata()
		{
			cout<<"\n Car company ="<<company;
			cout<<"\n Car model ="<<model;
			cout<<"\n Car Year = "<<year;
		}
};
int main()
{
	Car c1;
	int year;
	string company,model;
	cout<<"\n Enter Car company = ";
	cin>>company;
	cout<<"\n Enter Car model = ";
	cin>>model;
	cout<<"\n Enter Year = ";
	cin>>year;
	c1.setdata(year,company,model);
	c1.getdata();
	return 0;
}


