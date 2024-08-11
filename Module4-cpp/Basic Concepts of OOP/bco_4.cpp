/*4. Write a C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference.*/
#include<iostream>
using namespace std;
class Circle
{
		private:
		double radius,ra,rc;
	    public:
		void setdata(double rad)
      	{
		radius=rad;
		}
		void calculate()
     	{
		  ra=3.14*(radius*radius);
		  rc=2*3.14*radius;
	    }
		void display()
		{
			cout<<"\nArea of circle ="<<ra;
			cout<<"\ncircumference of circle ="<<rc;
		}	
	    
		
};
int main()
{
	double radi;
	cout<<"\n Enter Radius : ";
	cin>>radi;
	Circle c1;
	c1.setdata(radi);
	c1.calculate();
	c1.display();
	
	
	return 0;
}
