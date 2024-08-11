//9. Write a Program of Two 1D Matrix Addition using Operator Overloading
#include <iostream>
using namespace std;  
class Matrix1D 
{
private:
    int* data;
    int size;
public:
      Matrix1D(int size)  
	{
		this->size=size;
        data = new int[size];
    }
    Matrix1D(const Matrix1D& other) 
	{
        data = new int[size];
        for (int i = 0; i < size; ++i)
		 {
            data[i] = other.data[i];
         }
    }
    void input() {
        cout << "Enter " << size << " Value : ";
        for (int i = 0; i < size; ++i) {
            cin >> data[i];
        }
    }

    void display() const {
        cout << "[ ";
        for (int i = 0; i < size; ++i) {
            cout << data[i] << " ";
        }
        cout << "]" << endl;
    }

    
    Matrix1D operator+(const Matrix1D& other) 
   {
   
        Matrix1D result(size);
        for (int i = 0; i < size; ++i) 
		{
            result.data[i] = data[i] + other.data[i];
        }

        return result;
    }
};
int main()
{
    int size;
    cout << "Enter the size of the matrices: ";
    cin >> size;
    Matrix1D matrix1(size);
    Matrix1D matrix2(size);
    cout << "Matrix 1:" << endl;
    matrix1.input();
    cout << "Matrix 2:" << endl;
    matrix2.input();
    Matrix1D result = matrix1 + matrix2;
    cout << " Addition:" << endl;
    result.display();
    return 0;
}

