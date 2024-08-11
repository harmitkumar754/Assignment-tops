//2. Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>
using namespace std;
class Rect
{
	protected :
		double l,w;
	public:
	void setdata(double l,double w)
	{
		this->l=l;
		this->w=w;
	}
		
};
class Area:public Rect
{
	double a;
	public:
		double calc()
		{
			a=l*w;
			return a;
		}
	
};
int main()
{
	Area a1;
	double l,w,area;
	cout<<"\n Enter Width : ";
	cin>>w;
	cout<<"\n Enter Length : ";
	cin>>l;
	a1.setdata(l,w);
	area=a1.calc();
	cout<<"\n Rectangle Area : "<<area;
	
}

