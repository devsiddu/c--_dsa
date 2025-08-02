#include <iostream>
using namespace std;

int main()
{
    //declaring variables
    int a, b;
    cout << "Enter a value: " << endl;
    //taking a value from user
    cin >> a;

    cout << "Enter b value: " << endl;
    //taking a value from user
    cin >> b;

    //displaying values
    cout << "Sum of a & b: " << (a + b) << endl;
    cout << "Substraction of a & b: " << (a - b) << endl;
    cout << "Multiplication of a & b: " << (a * b) << endl;
    cout << "Division of a & b: " << (a / b) << endl;
}