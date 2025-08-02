#include <iostream>
using namespace std;

int main()
{
    // Approach - 1
    /*
    int a = 10, b = 10;
    int sum = a + b;
    cout << "Sum of a & b: " << sum << endl;
    */

    // Approach - 2
    //  int a = 10, b = 5;
    //  cout << a+b << endl;

    // taking input from user
    int a, b;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter a value: ";
    cin >> b;

    cout << "Sum of a & b = "<< a + b << endl;
    return 0;
}