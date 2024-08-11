/*5Assume that the test results of a batch of students are stored in three different 
classes. Class Students are storing the roll number. Class Test stores the 
marks obtained in two subjects and class result contains the total marks 
obtained in the test. The class result can inherit the details of the marks 
obtained in the test and roll number of students. (Multilevel Inheritance)
*/
#include<iostream>
using namespace std;
class Student
{
	
		
	public :
		int rn;
		void get1()
		{
			cout<<"\n Enter Roll No : ";
			cin>>rn;
		}
		
};
class Test:public Student
{
	protected :
		int s1,s2;
	public :
	void get2()
	{
	cout<<"\n Enter Php Mark out of 100 : ";
	cin>>s1;
	cout<<"\n Enter Vb.net Mark out of 100 : ";
	cin>>s2;
	}	
};
class Result:public Test
{
	public:
		void display()
		{
		
	int omark=s1+s2;
	float per=(omark*100)/200;
	cout<<"\nRoll No : "<<rn;
	
	cout<<"\nTotal Mark Obtain :"<<omark;
	
	cout<<"\nPercentage : "<<per;
	
       }
};
int main()
{
	Result r1;
	r1.get1();
	r1.get2();
	r1.display();
}


