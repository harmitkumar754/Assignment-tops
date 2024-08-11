/*11. Write a program to calculate the area of circle, rectangle and triangle 
using Function Overloading
Rectangle: Area * breadth 
Triangle: ½ *Area* breadth 
Circle: Pi * Area *Area*/

#include<iostream>
using namespace std;
class Shape
{
	public :
		void shape(string name,int side1,int side2,int side3)//triangle
		{
			cout<<"\n shape=" <<name<<" "<<"area = "<<side1+side2+side3;
		}
		void shape(string name,double radius)//circle
		{
			cout<<"\n shape="<<name<<" "<<"area = "<<3.14*(radius*radius);
		}
		void shape(string name,int l,int b)//rectangle
		{
			cout<<"\n shape="<<name<<" "<<"area = "<<l*b;
		}
};
int main()
{
	int t1,t2,t3,l,w;
	float r1;
	Shape s1;
	cout<<"\n Enter Tringle Detail : ";
	cout<<"\n";
	cout<<"\n Enter side 1 :";
	cin>>t1;
	cout<<"\n Enter side 2 :";
	cin>>t2;
	cout<<"\n Enter side 3 :";
	cin>>t3;
	s1.shape("Triangle",t1,t2,t3);
	cout<<"\n";
	cout<<"\n Enter Circle Detail : ";
	cout<<"\n";
	cout<<"\n Enter Radius  :";
	cin>>r1;
	Shape s2;
	s2.shape("circle",r1);
	cout<<"\n";
	cout<<"\n Enter Ractengle Detail : ";
	cout<<"\n";
	cout<<"\n Enter length :";
	cin>>l;
	cout<<"\n Enter width :";
	cin>>w;
	Shape s3;
	s3.shape("Rectangle",l,w);
	return 0;
}
