## Operators in c++
Operators are special symbols in C++ that perform operations on variables and values. C++ provides a rich set of operators to manipulate data. Here are the main categories of operators:

### Types of Operators
- Arithmetic Operators
- Relational Operators
- Logical Operators
- Unary Operators
- Assignment Operators
- Bitwise Operators
- Conditional (Ternary) Operator

### 1. Arithmetic Operators
Arithmetic operators are used to perform basic mathematical operations like addition, subtraction, multiplication, and division.

#### Example:
```c++
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    float b = 10.0;
    // arithmetic operator (+, -, *, /, %)

    int sum = a + b;
    int sub = a - b;
    int multi = a * b;
    int div = a / b;
    cout << "Sum is: " << (a + b) << endl;
    cout << "Substraction is: " << (a - b) << endl;
    cout << "Multiplication is: " << (a * b) << endl;
    cout << "Division is: " << (a / b) << endl;

    // convert float to int
    cout << "Modals is: " << (a % (int)b) << endl;
    cout << endl;

    return 0;
}
```
output:
```
Sum is: 15
Substraction is: -5
Multiplication is: 50
Division is: 0
Modals is: 5
```
### 2. Relational Operators
Relational operators are used to compare two values. They return a boolean value (true or false) based on the comparison.

#### Example:
```c++
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    float b = 10.0;

// // Relational operators(<, <=, >, >=, ==, !=)

    cout << (a < b) << endl;  // 1
    cout << (a > b) << endl;  // 0
    cout << (a <= b) << endl; // 1
    cout << (a >= b) << endl; // 0
    cout << (a == b) << endl; // 0
    cout << (a != b) << endl; // 1

    return 0;
}
```

### 3. Logical Operators
Logical operators are used to combine or invert boolean values. They include AND (`&&`), OR (`||`), and NOT (`!`).
#### Example:
```c++
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    float b = 10.0;

 
// logical operator (&&, ||, !)

    // !
    //it gives result vice-versa if condition is true it give result false , if condition is false it gives result as true

    //ex

    cout << !(a < b) << endl; // a < b = true , !true = false/0

    // && 
    // if both conditions are true/1 it gives result true/1 , if one condition is true/1 && one condition is false/0 = it gives result false/0
    
    // ex
   
    cout << (a < b && a > b) << endl; // a < b = 1 , a > b = 0 then 1 && 0 = 0
    
    // ||
    //if a one/more conditions are true in multiple conditions it gives true as result other then it gives false 
    // ex 
    
    cout << (a < b || a > b) << endl; // a < b = 1 , a > b = 0 then 1 || 0 = 1
 
    return 0;
}
```

#### 4. Unary Operators
Unary operators operate on a single operand. They include increment (`++`), decrement (`--`).

#### Example:
```c++
#include <iostream>
using namespace std;

int main()
{
//Unary Operator(increment, decrement) 
    // 1. Increment
    // types 
    // post increment

    //first assign value then increment
    
    int a = 10;
    int b = a++;
    cout << "b value : " << b <<endl;
    cout << "a value : " << a <<endl;
    
    // pre increment
    //first increment then assign value
    int a = 10;
    int b = ++a;

    cout <<"b value: "<< b << endl;
    cout <<"a value: " <<a << endl;
    return 0;
}
```
output:
```
b value : 10
a value : 11
b value: 11
a value: 11
```

### 5. Assignment Operators
Assignment operators are used to assign values to variables. The most common assignment operator is `=`. There are also compound assignment operators like `+=`, `-=`, `*=`, `/=`, and `%=`.
#### Example:
```c++
#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int b = 20;

    // Assignment operator (=)
    a = b; // a is now 20
    cout << "a after assignment: " << a << endl;

    // Compound assignment operators
    a += b; // a = a + b
    cout << "a after += : " << a << endl;

    a -= b; // a = a - b
    cout << "a after -= : " << a << endl;

    a *= b; // a = a * b
    cout << "a after *= : " << a << endl;

    a /= b; // a = a / b
    cout << "a after /= : " << a << endl;

    return 0;
}
```
output:
```
a after assignment: 20
a after += : 40
a after -= : 20
a after *= : 400
a after /= : 20
```

### 6. Bitwise Operators
Bitwise operators perform operations on bits and are used for low-level programming. They include AND (`&`), OR (`|`), XOR (`^`), NOT (`~`), left shift (`<<`), and right shift (`>>`).
#### Example:
```c++
#include <iostream>
using namespace std;
int main()
{
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary

    // Bitwise AND
    cout << "a & b: " << (a & b) << endl; // 0001 in binary, which is 1

    // Bitwise OR
    cout << "a | b: " << (a | b) << endl; // 0111 in binary, which is 7

    // Bitwise XOR
    cout << "a ^ b: " << (a ^ b) << endl; // 0110 in binary, which is 6

    // Bitwise NOT
    cout << "~a: " << (~a) << endl; // Inverts bits of a

    // Left Shift
    cout << "a << 1: " << (a << 1) << endl; // Shifts bits of a to the left by 1

    // Right Shift
    cout << "a >> 1: " << (a >> 1) << endl; // Shifts bits of a to the right by 1

    return 0;
}
```
output:
```
a & b: 1
a | b: 7
a ^ b: 6
~a: -6
a << 1: 10
a >> 1: 2
```

### Extra examples :

1. Sum of two numbers
```c++
#include <iostream>
using namespace std;

int main()
{
    // Approach - 1
    
    int a = 10, b = 10;
    int sum = a + b;
    cout << "Sum of a & b: " << sum << endl;

    // Approach - 2
     int a = 10, b = 5;
     cout << a+b << endl;

    // taking input from user
    int a, b;
    cout << "Enter a value: ";
    cin >> a;
    cout << "Enter a value: ";
    cin >> b;

    cout << "Sum of a & b = "<< a + b << endl;
    return 0;
}
```

2. Simple Calculator Program

```c++
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
    cout << "Subtraction of a & b: " << (a - b) << endl;
    cout << "Multiplication of a & b: " << (a * b) << endl;
    cout << "Division of a & b: " << (a / b) << endl;
}
```