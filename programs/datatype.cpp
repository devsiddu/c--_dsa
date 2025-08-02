#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // list of datatypes
    int age = 21;
    char grade = 'A';
    float cgpa = 8.5f;
    bool isPaid = true; // true mens 1 & false means 0
    double balance = 10.0;

    // o/p

    // age: 21
    // grade: A
    // cgpa: 8.5
    // isPaid: 1
    // balance: 10

    // printing values
    cout << "age: " << age << endl;
    cout << "grade: " << grade << endl;
    cout << "cgpa: " << cgpa << endl;
    cout << "isPaid: " << isPaid << endl;
    cout << "balance: " << balance << endl;
    cout << endl;

    // printing sizes of variables
    cout << "Size of age: " << sizeof(age) << "Bytes" << endl;
    cout << "Size of grade: " << sizeof(grade) << "Bytes" << endl;
    cout << "Size of cgpa: " << sizeof(cgpa) << "Bytes" << endl;
    cout << "Size of isPaid: " << sizeof(isPaid) << "Bytes" << endl;
    cout << "Size of balance: " << sizeof(balance) << "Bytes" << endl;
    cout << endl;

    // o/p
    // Size of age: 4Bytes
    // Size of grade: 1Bytes
    // Size of cgpa: 4Bytes
    // Size of isPaid: 1Bytes
    // Size of balance: 8Bytes

    // printing types of variables
    cout << "age type: " << typeid(age).name() << endl;
    cout << "grade type: " << typeid(grade).name() << endl;
    cout << "cgpa type: " << typeid(cgpa).name() << endl;
    cout << "isPaid type: " << typeid(isPaid).name() << endl;
    cout << "balance type: " << typeid(balance).name() << endl;

    // o/p
    // age type: i
    // grade type: c
    // cgpa type: f
    // isPaid type: b
    // balance type: d

    return 0;
}