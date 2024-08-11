/*4. Write a C++ Program display Student Mark sheet using Multiple inheritance*/
#include<iostream>
using namespace std;
class Stud_Detail
{ 
   protected :
   	int rno,std;
   	string nm;
   	public :
   	void setdata1(int rno,int std,string nm)
   	{
   		this->rno=rno;
   		this->std=std;
   		this->nm=nm;
	}
};
class Mark
{

  protected :
	int m1,m2,m3,m4;
	float per;
   public :
    void setdata2(int m1,int m2,int m3,int m4)	
    {
    	this->m1=m1;
    	this->m2=m2;
    	this->m3=m3;
    	this->m4=m4;
    	
	}
	void percentile()
	{
		per=((m1+m2+m3+m4)*100)/400;
	}
	
};
class Result:public Stud_Detail,public Mark
{ 
    public :
	void print()
	{
	cout<<"\n-----------------------------------------------";
	cout<<"\n\t\t\tMarksheet";
	cout<<"\n-----------------------------------------------";
	cout<<"\n\tName = "<<nm;
	cout<<"\t\tRoll No ="<<rno;

	cout<<"\n\tStandard ="<<std;
	cout<<"\n-----------------------------------------------";
	cout<<"\n\tSubject\tTotalMark\tObtainMark";
	cout<<"\n-----------------------------------------------";
	cout<<"\n\tPhp    \t100       \t"<<m1;
	cout<<"\n\tVb.net \t100       \t"<<m2;
	cout<<"\n\tPython \t100       \t"<<m3;
	cout<<"\n\tcpp    \t100       \t"<<m4;
	cout<<"\n-----------------------------------------------";
	cout<<"\n\t Percentage ="<<per;
	if(per>=33)
	{
		cout<<"\t\t Result = Pass";
	}
	else
	{
		cout<<"\t\t Result = Fail";
	}
    }  
};
int main()
{
	int rno,std,m1,m2,m3,m4;
   	string nm;
	float per;
	cout<<"\n Enter Student Name : ";
	cin>>nm;
	cout<<"\n Enter Roll no : ";
	cin>>rno;
	cout<<"\n Enter Standerd : ";
	cin>>std;
	cout<<"\n Enter Php Mark out of 100 : ";
	cin>>m1;
	cout<<"\n Enter Vb.net Mark out of 100 : ";
	cin>>m2;
	cout<<"\n Enter Python Mark out of 100 : ";
	cin>>m3;
	cout<<"\n Enter Cpp Mark out of 100 : ";
	cin>>m4;
	Result r1;
	r1.setdata1(rno,std,nm);
	r1.setdata2(m1,m2,m3,m4);
	r1.percentile();
	r1.print();
	
}
