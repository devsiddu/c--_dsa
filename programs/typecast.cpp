#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // type casting

    // 1. implicit conversion
    char grade = '1';
    int value = grade;
    cout << grade << endl;
    cout << value;
    cout << endl;

    // 2. explicit conversion
    double price = 100.0;
    int newPrice = (int)price;

    cout << newPrice << endl;
    cout << typeid(newPrice).name() << endl;
    cout << typeid(price).name() << endl;
    return 0;
}