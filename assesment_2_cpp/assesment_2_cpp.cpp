#include<iostream>
#include<string.h>
#include<ctime> 
using namespace std;
class Bank
{
	public:
		int a,p,key;
		string h;
		long bal=5000,acno=98766546,depo,with;
		string nm="Mr.Harmit Donda",branch="Palitana",add="Budhana";
		
	 Bank()
		{
			cout<<"\n\n*****************************************************Bank TO ATM*****************************************************";
			cout<<"\n\t\t\t\t\t\t___________________________ ";
			//date and time start
			 // Declaring argument for time() 
    time_t tt; 

    // Declaring variable to store return value of 
    // localtime() 
    struct tm* ti; 

    // Applying time() 
    time(&tt); 

    // Using localtime() 
    ti = localtime(&tt); 

    // Create a buffer to store the formatted date and time
    char tem[80];

    // Format the date and time as dd-mm-yyyy hh:mm:ss
    strftime(tem, sizeof(tem), "Date = %d-%m-%Y , Time= %H:%M:%S", ti);

  //  cout << "Current Date and Time is = " << buffer << endl;
  
			//date and time end
			
			cout<<"\n\n\t\t\t\t\tCurrent " << tem << endl;  
			cout<<"\n\t\t\t\t\t\t___________________________ ";    
			cout<<"\n\n************************************************************************************************************************";
			cout<<"\n\t\tPress 1 and Then Press Enter To Access Your Account Via Pin Number" ;
			cout<<"\n\n\t\t\t\t\t\tOR";
			cout<<"\n\n\t\tPress 0 and press Enter To Get Help."; 
			cin>>a;  
			 if(a==1)
			 {
			 	pin();
			 }
			 else if(a==0)
			 {
			 	help();
			 }
			 
			                            
		}
	   void pin()
	   {
	   	if(a==1)
	   	{
		   
	   	  cout<<"\n\n*************************************************ATM ACCOUNT ACCESS*****************************************************";
	   	  cout<<"\n\nEnter Your Acc Pin Access Number! [Only one attempt is allowed]";
	   	  cout<<"\n\n************************************************************************************************************************";
	      cin>>p;
	      if(p==123456 )
	      {
	      	mainmenu();
	      }
	      else
	      {
	      	incorrectpin();
		  }
		}
	    else
	    {
	    	if(a==0)
	    	help();
		}
	   }
	   void help()
	   {
	   	
		   
	   	cout<<"\n\n*************************************************ATM ACCOUNT STATUS*****************************************************";
	   	cout<<"\n\n\t\t\tYou must have the correct pin number to access this acount. see your";
	   	cout<<"\n\t\t\t\t bank representative for assistance during bank opening hours";
	   	cout<<"\n\t\t\t\t\tThanks for , your choice today!!";
	   	cout<<"\n\n************************************************************************************************************************";
	    cout<<"\nPress Any key to Continue . . .";
	    cin>>h;
	    while('h')
	    {
	    	Bank();
		}
     	
	   }
	   void incorrectpin()
	   {
	   	cout<<"\n\n****************************************************THANK YOU**********************************************************";
	   	cout<<"\n\n\tYou had made your attempt which failed!!! No more attempts allowed!! sorry!!";
	   	cout<<"\n\n************************************************************************************************************************";
	   	cout<<"\nPress Any key to Continue . . .";
	   	cin>>h;
	    while('h')
	    {
	    	Bank();
		}
	   }
	   void mainmenu()
	   {
	   	cout<<"\n\n***********************************************ATM MAIN MENU SCREEN*****************************************************";
	   	cout<<"\n\n\t\t\tEnter   [1] To Deposit Cash";
	   	cout<<"\n\t\t\tEnter   [2] To Withdraw Cash";
	   	cout<<"\n\t\t\tEnter   [3] To Balance inquiry";
	   	cout<<"\n\t\t\tEnter   [0] To Exit ATM";
	   	cout<<"\n\n\t\tPlease Enter A Selection and Press Return Key:";cin>>key;
	   	cout<<"\n\n************************************************************************************************************************";
	   	
	   	switch(key)
	   	{
	   	 case 1:
			deposit();
		 	break;
		 case 2:
		 	withdraw();
			 break;
		 case 3:
		 	balance();
			 break;
		  case 0:
		  	exit(0);
		  	break;
		  default :
		  cout<<"Invallid Input!!!";
		  break;	
		     	 	
		}
	   }
	   void deposit()
	   {
	   	cout<<"\n\n********************************************ATM ACCOUNT DEPOSIT SYSTEM**************************************************";
	    cout<<"\n\n\tThe Name of The Accounnt Holders Are :"<<nm;
	    cout<<"\n\t\tThe Account Holders' address is :"<<add;
	    cout<<"\n\t\tThe Branch Location is :"<<branch;
	    cout<<"\n\t\tThe Account Number :"<<acno;
	    cout<<"\n\n************************************************************************************************************************";
		cout<<"\n\n\tPresent Available Balance  :"<<bal;
	    cout<<"\n\t\tEnter the Amount To be Deposited Rs.:";cin>>depo;
	    bal+=depo;
	    cout<<"\n\t\tYour New Available Balanced Amount is Rs.:"<<bal;
	    cout<<"\n\t\t\t\tThank You!";
	    cout<<"\n\n\nPress Any key Return to the main menu . . .";
	    cin>>h;
	    while('h')
	    {
	    	mainmenu();
		}
		}
		void withdraw()
	   {
	   	cout<<"\n\n********************************************ATM ACCOUNT WITHDRAWAL SYSTEM**************************************************";
	    cout<<"\n\n\tThe Name of The Accounnt Holders Are :"<<nm;
	    cout<<"\n\t\tThe Account Holders' address is :"<<add;
	    cout<<"\n\t\tThe Branch Location is :"<<branch;
	    cout<<"\n\t\tThe Account Number :"<<acno;
	    cout<<"\n\n************************************************************************************************************************";
		cout<<"\n\n\tPresent Available Balance  :"<<bal;
	    cout<<"\n\t\tEnter the Amount To be Withdraw Rs.:";cin>>with;
	    if(with>bal)
	    {
	    	unsucessfulwith();
		}
		else
		{
		bal-=with;	
		cout<<"\n\t\tYour New Available Balanced Amount is Rs.:"<<bal;
	    cout<<"\n\t\t\t\tThank You!";
	    cout<<"\n\n\nPress Any key Return to the main menu . . .";
	     cin>>h;
	    while('h')
	    {
	    	mainmenu();
		}
		}
	    
		}
		void unsucessfulwith()
		{
		cout<<"\n\n******************************************ATM ACCOUNT WITHDRAWAL SYSTEM*************************************************";
	    cout<<"\n\n\tThe Name of The Accounnt Holders Are :"<<nm;
	    cout<<"\n\t\tThe Account Holders' address is :"<<add;
	    cout<<"\n\t\tThe Branch Location is :"<<branch;
	    cout<<"\n\t\tThe Account Number :"<<acno;
	    cout<<"\n\n************************************************************************************************************************";
		cout<<"\n\n\tInsufficient Available Balance in Your account. ";
	   
	    cout<<"\n\n\t\t\t\t\tSorry  !!";
	    cout<<"\n\n\nPress Any key  to Continue . . .";
	    cin>>h;
	    while('h')
	    {
	    	mainmenu();
		}
		}
		void balance()
		{
		cout<<"\n\n******************************************ATM BANK BALANCE CHECK SYSTEM*************************************************";
	    cout<<"\n\n\tThe Name of The Accounnt Holders Are :"<<nm;
	    cout<<"\n\t\tThe Account Holders' address is :"<<add;
	    cout<<"\n\t\tThe Branch Location is :"<<branch;
	    cout<<"\n\t\tThe Account Number :"<<acno;
	    cout<<"\n\n************************************************************************************************************************";
		cout<<"\n\n\tBank Balance = "<<bal;
	   
	    cout<<"\n\n\t\t\t\t\tThanks ... !!";
	    cout<<"\n\n\nPress Any key  to Continue . . .";
	    cin>>h;
	    while('h')
	    {
	    	mainmenu();
		}
		}
		
};
int main()
{
	Bank b1;
}

