/*1. Assume a class cricketer is declared. Declare a derived class batsman from 
cricketer. Data member of batsman. Total runs, Average runs and best 
performance. Member functions input data, calculate average runs, Display 
data. (Single Inheritance)*/
#include<iostream>
using namespace std;
class Cricketer
{

    public:
    string nm;
    int mp;
    void inputData1()
	 {
        cout << "Enter cricketer's name: ";
        cin >> nm;
        cout << "Enter number of matches played: ";
        cin >> mp;
    }
    void displayData1()
	 {
        cout << "Cricketer's Name: " << nm << endl;
        cout << "Matches Played: " << mp << endl;
    }

};
class Batsman:public Cricketer
{
	int tr;
    double ar;
    int best_p;
	public :
	void inputdata()
	{
		 cout << "Enter total runs scored: ";
         cin >> tr;
         cout << "Enter best performance (highest score): ";
         cin >> best_p;
	}	
	void calculate_average_runs()
	{
            ar = tr / mp;
    }
	void desplay_data()
	{ 
	     displayData1();
		cout << "Total Runs: " << tr << endl;
        cout << "Average Runs: " << ar << endl;
        cout << "Best Performance: " << best_p << endl;
	}
};
int main()
{
	Batsman b1;
	b1.inputData1();
    b1.inputdata();
    b1.calculate_average_runs();
    cout << "\nDisplaying Batsman Data:\n";
    b1.desplay_data();
}

