/*2. Define a class to represent a bank account. Include the following members:
3. Data Member:
-Name of the depositor
-Account Number
-Type of Account
-Balance amount in the account
Member Functions
-To assign values
-To deposited an amount
-To withdraw an amount after checking balance
-To display name and balance
*/
#include<iostream>
using namespace std;
class Bankac
{
	public:
		double acno,bal,withamt;
		string nm,type;
		void assignval(double acno,double bal,string nm,string type)
		{
			this->acno=acno;
			this->bal=bal;
			this->nm=nm;
			this->type=type;
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
			cout<<"\nSuccsessfully Withdraw...";
			this->bal-=withamt;
			cout<<"\nYour Balance Is ="<<this->bal;
		}
		void display()
		{
			cout<<"\n\t\t Your Name Is ..."<<this->nm;
			cout<<"\n\t\t Your Balance Is ..."<<this->bal;
			
		}
		
};
int main()
{
	double acno,bal,withamt,depo;
	int ch,chh;
	string nm,type;
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
	cout<<"\n Enter Your Name :";
	cin>>nm;
	cout<<"\n Enter Account Type :";
	cin>>type;
	cout<<"\n Enter Account Number :";
	cin>>acno;
	cout<<"\n Enter Diposit Amount :";
	cin>>bal;
	b1.assignval(acno,bal,nm,type);
	
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
