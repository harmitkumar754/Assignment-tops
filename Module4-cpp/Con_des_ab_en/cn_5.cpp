/*Write a C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene*/
#include <iostream>
using namespace std;
class Triangle 
{
private:
    double side1;
    double side2;
    double side3;

public:
    
    Triangle(double s1, double s2, double s3)
    		{
    			side1=s1;
    			side2=s2;
    			side3=s3;
			}

    void display()
    {
    	if(side1 == side2 && side2 == side3)
    	{
    		cout << "The triangle is equilateral.";
		}
		else if(side1 == side2 || side2 == side3 || side1 == side3)
		{
			cout << "The triangle is isosceles." ;
		}
		else if(side1 != side2 && side2 != side3 && side1 != side3)
		{
			cout << "The triangle is scalene." ;
		}
		 else 
		{
            cout << "The triangle does not satisfy any conditions." ;
        }
    	
	}
   
};
   

int main() {
    double side1, side2, side3;
    
   
    cout << "Enter the lengths of the side 1 : ";
    cin >> side1;
     cout << "Enter the lengths of the side 2 : ";
    cin >>side2;
     cout << "Enter the lengths of the side 3 : ";
    cin >> side3;

    
    Triangle t1(side1, side2, side3);

   
    t1.display();

    return 0;
}

