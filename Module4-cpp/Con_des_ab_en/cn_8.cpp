/*8. Write a C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation
*/
#include<iostream>
using namespace std;
class Student
{
	string nm,cls;
	int rno,marks;
	public :
	void setdata(int rno,string nm,string cls,int marks)
	{
		this->rno=rno;
		this->nm=nm;
		this->cls=cls;
		this->marks=marks;
		
	}
	
	void grade()
	{
		 if (marks >= 90){
        cout<<"Your Grade is A+";
    }
    else if (marks >= 80){
        cout<<"Your Grade is A";
    }
    else if (marks >= 70){
        cout<<"Your Grade is B+";
    }
    else if (marks >= 60){
        cout<<"Your Grade is B";
    }
    else if (marks >= 50){
        cout<<"Your Grade is C";
    }
    else if (marks >= 40){
        cout<<"Your Grade is D";
    }
    else if (marks >= 30){
        cout<<"Your Grade is E";
    }
    else if (marks <= 30){
        cout<<"Your Grade is F";
    }
    else{
        cout<<"Enter Valid Marks";
    }
	}
};
int  main()
{
	string nm,cls;
	int rno,marks;
	Student s1;
	cout<<"\n Enter Roll No :";
	cin>>rno;
	cout<<"\n Enter Name :";
	cin>>nm;
	cout<<"\n Enter class :";
	cin>>cls;
	cout<<"\n Enter Marks :";
	cin>>marks;
	s1.setdata(rno,nm,cls,marks);
	s1.grade();
	return 0;
	
}
