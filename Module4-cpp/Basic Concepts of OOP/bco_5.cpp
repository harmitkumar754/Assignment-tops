/*5. Write a C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter.*/
#include<iostream>
using namespace std;
class Rectangle
{
		private:
		double l,w,ra,rp;
	    public:
		void setdata(double l,double w)
      	{
		this->l=l;
		this->w=w;
		}
		void calculate()
     	{
		  ra=w*l;
		  rp=2*(w+l);
	    }
		void display()
		{
			cout<<"\nArea of rectangle ="<<ra;
			cout<<"\ncircumference of perimeter ="<<rp;
		}	
	    
		
};
int main()
{
	double w,l;
	cout<<"\n Enter Width : ";
	cin>>w;
	cout<<"\n Enter length : ";
	cin>>l;
	
	Rectangle r1;
	r1.setdata(l,w);
	r1.calculate();
	r1.display();
	
	
	return 0;
}
