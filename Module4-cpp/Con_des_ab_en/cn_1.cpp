/*1. Write a program to find the multiplication values and the cubic values using 
inline function*/
#include <iostream>
using namespace std;
inline int multiply(int a, int b)
{
    return a * b;
}
inline int cube(int x) 
{
    return x * x * x;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers to multiply: ";
    cin >> num1 >> num2;
    int multip = multiply(num1, num2);
    cout << "Multiply: " << multip << endl;
    cout << "Enter a number to find its cube: ";
    cin >> num1; 
    int cub = cube(num1);
    cout << "Cube: " << cub << endl;
    return 0;
}

