//1.WAP to create simple calculator using class
#include<iostream>
using namespace std;
class Cal
{
	public :
    int ans;
	int calc(int a,int b,char c)
	{
		switch(c)
		{
			case '+':
			ans=a+b;
			break;
			
			case '-':
			ans=a-b;
			break;
			
			case '*':
			 ans=a*b;
			 break;
			 	
			case '/':
			ans=a/b;
			break;
			
			default :
				cout<<"Invallid Choise!!!";
				break;
				
		}
		return ans;
	}
};
int main()
{ 
    Cal c1;
	int a,b,ans;
	char c;
	cout<<"\nEnter No 1 =";
	cin>>a;
	cout<<"\nEnter No 2 =";
	cin>>b;
	cout<<"\nEnter Operator =";
	cin>>c;
	ans=c1.calc(a,b,c);
	cout<<"\nAns = "<<ans;
}
