## Type Cast in c++
Type casting is the process of converting a variable from one data type to another. In C++, there are several ways to perform type casting, including implicit and explicit casting.

#### Types ->
- Implicit Type Casting
- Explicit Type Casting

1. Implicit Type Casting
   - This is automatically done by the compiler when it converts a smaller data type to a larger data type without losing any information. For example, converting an `int` to a `float`.

#### Example:
```c++
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // 1. implicit conversion
    char grade = '1';
    int value = grade;
    cout << grade << endl;
    cout << value;
    cout << endl;

    return 0;
}
```

2. Explicit Type Casting
   - This is done by the programmer using casting operators. It allows you to convert a variable from one type to another explicitly, which can be useful when you want to ensure that the conversion is done correctly.

#### Example:
```c++
#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
    // 2. explicit conversion
    double price = 100.0;
    int newPrice = (int)price;

    cout << newPrice << endl;
    cout << typeid(newPrice).name() << endl;
    cout << typeid(price).name() << endl;
    return 0;
}
```

