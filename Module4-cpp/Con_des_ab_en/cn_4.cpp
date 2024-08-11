/*4.Write a C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account*/
#include<iostream>
using namespace std;
class Bankac
{
	private:
		double acno,bal,withamt;
	public:	
		void assignval(double acno,double bal)
		{
			this->acno=acno;
			this->bal=bal;
			cout<<"\nDetail Succsessfully Added...";
		}
		void deposited_amt(double depo)
		{
			this->bal+=depo;
			cout<<"\nSuccsessfully Deposited...";
		}
		void withdraw()
		{
			cout<<"\nYour Balance is = "<<this->bal;
			cout<<"\n Enter Amount for Withdraw = ";
			cin>>withamt;
			this->bal-=withamt;
			cout<<"\nSuccsessfully Withdraw...";
			
			cout<<"\nYour Balance Is ="<<this->bal;
		}
		void display()
		{
			cout<<"\n\t\t Your Account No Is ..."<<this->acno;
			cout<<"\n\t\t Your Balance Is ..."<<this->bal;
			
		}
		
};
int main()
{
	double acno,bal,withamt,depo;
	int ch,chh;
	Bankac b1;
	do{
	
	cout<<"\n\t\t*****Stat Bank Of India*****";
	cout<<"\nPress '1' For Open Account";
	cout<<"\nPress '2' For Deposit Amount";
	cout<<"\nPress '3' For Withdraw Account";
	cout<<"\nPress '4' For check Bank balance";
	cout<<"\nEnter Choice = ";
	cin>>ch;
	switch(ch)
	{
		case 1:
	
	cout<<"\n Enter Account Number :";
	cin>>acno;
	cout<<"\n Enter Diposit Amount :";
	cin>>bal;
	b1.assignval(acno,bal);
	
		break;
		case 2:
		cout<<"\n Enter  Amount for Deposit =";
		cin>>depo;	
		b1.deposited_amt(depo);
		break;
		case 3:	
		b1.withdraw();	
		break;
		case 4:
		b1.display();
		break;
		default :
		cout<<"\n Invallid Choice ...";
		break;
	}
	cout<<"\n\t\t Press '0' for Continue... ";
	cin>>chh;
}while(chh==0);
	return 0;
	
}
