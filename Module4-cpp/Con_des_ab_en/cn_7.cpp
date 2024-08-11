/*7. Write a C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid.
*/
#include<iostream>
using namespace std;
class Date
{
	int day,month,year;
	public:
		void setdata(int day,int month,int year)
		{
			this->day=day;
			this->month=month;
			this->year=year;
		}
		void display()
		{
			cout<<"\n "<<day<<"/"<<month<<"/"<<year;
			cout<<"\n Date is Vallid .";
		}
		void getdata()
		{
			if(year > 999 && year < 9999)
			{
			
			if (month >= 1 || month <= 12)
			{
				if ((month == 4 || month == 6 || month == 9 || month == 11) && day <= 30)
				{
					display();
					
				}
				else if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10|| month ==12) && day <= 31)
				{
					display();
				}
				else if(month == 2)
				{
					if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
					{
                      if (day <= 29)
                      display();
                      else
                      cout<<"\n date is invallid";
                    } 
					else
					{
                        if (day <= 28)
                        display();
                        else
                        cout<<"\n date is invallid";
			       	}
		    	}
		    	else
		    	{
		    		cout<<"\n date is invallid";
				}
	    	}
		}
		else
		{
			cout<<"\n date is invallid";
		}
	}
};
int main()
{
	int day,month,year;
	Date d1;
	cout<<"\n Enter Day = ";
	cin>>day;
	cout<<"\n Enter Month = ";
	cin>>month;
	cout<<"\n Enter Year = ";
	cin>>year;
	d1.setdata(day,month,year);
	d1.getdata();
}
