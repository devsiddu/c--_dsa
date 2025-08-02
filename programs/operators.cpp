// operators in c++

#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // float b = 10.0;
// // arithmetic operator (+, -, *, /, %)

    // int sum = a + b;
    // int sub = a - b;
    // int multi = a * b;
    // int div = a / b;
    // cout << "Sum is: " << (a + b) << endl;
    // cout << "Substraction is: " << (a - b) << endl;
    // cout << "Multiplication is: " << (a * b) << endl;
    // cout << "Division is: " << (a / b) << endl;

    // // convert float to int
    // cout << "Modals is: " << (a % (int)b) << endl;
    // cout << endl;

// // Relational operators(<, <=, >, >=, ==, !=)

    // cout << (a < b) << endl;  // 1
    // cout << (a > b) << endl;  // 0
    // cout << (a <= b) << endl; // 1
    // cout << (a >= b) << endl; // 0
    // cout << (a == b) << endl; // 0
    // cout << (a != b) << endl; // 1

// logical operator (&&, ||, !)

    // !
    //it gives result vice-versa if condition is true it give result false , if condition is false it gives result as true

    //ex

    //cout << !(a < b) << endl; // a < b = true , !true = false/0

    // && 
    // if both conditions are true/1 it gives result true/1 , if one condition is true/1 && one condition is false/0 = it gives result false/0
    
    // ex
   
    //cout << (a < b && a > b) << endl; // a < b = 1 , a > b = 0 then 1 && 0 = 0
    
    // ||
    //if a one/more conditions are true in multiple conditions it gives true as result other then it gives false 
    // ex 
    
    //cout << (a < b || a > b) << endl; // a < b = 1 , a > b = 0 then 1 || 0 = 1
 

//Unary Operator(increment, decrement) 
    // 1. Increment
    // types 
    // post increment

    //first assign value then increment
    
    // int a = 10;
    // int b = a++;
    // cout << "b value : " << b <<endl;
    // cout << "a value : " << a <<endl;
    
    // pre increment
    //first increment then assign value
    // int a = 10;
    // int b = ++a;

    // cout <<"b value: "<< b << endl;
    // cout <<"a value: " <<a << endl;
    return 0;
}