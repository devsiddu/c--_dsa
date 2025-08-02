## Datatypes in c++
Data types specify the type of data that a variable can store. Whenever a variable is defined in C++, the compiler allocates some memory for that variable based on the data type with which it is declared as every data type requires a different amount of memory.

C++ supports a wide variety of data types, and the programmer can select the data type appropriate to the needs of the application.

#### Types: 
- int 
- float
- char
- double
- bool

1. int 
   -  Denotes that the given variable can store the integer numbers. The keyword used to define integers is int. Its size is 4-bytes (for 64-bit) systems and can store numbers for binary, octal, decimal and hexadecimal base systems in the range from -2,147,483,648 to 2,147,483,647.

2. float
    -  Denotes that the given variable can store floating-point numbers. The keyword used to define floating-point numbers is float. Its size is 4-bytes (for 64-bit) systems and can store numbers in the range of 1.2E-38 to 3.4E+38.

3. char
    -  Denotes that the given variable can store a single character. The keyword used to define characters is char. Its size is 1-byte (for 64-bit) systems and can store characters from the ASCII character set.

4. double
    -  Denotes that the given variable can store double-precision floating-point numbers. The keyword used to define double-precision floating-point numbers is double. Its size is 8-bytes (for 64-bit) systems and can store numbers in the range of 2.2E-308 to 1.8E+308.

5. bool
    -  Denotes that the given variable can store boolean values. The keyword used to define boolean values is bool. Its size is 1-byte (for 64-bit) systems and can store values of either true or false.

#### Example:
```c++ 
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
```

