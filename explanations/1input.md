## Taking input from user in c++

To take input from user in c++ we use  `cin` object 

create a simple c++ program file ex: `input.cpp` the file extension should be `cpp`


Simple program
```c++
#include <iostream>
using namespace std;

int main(){
    int age;
    //display message to your
    cout << "Enter you Age : ";

    //taking input from user
    cin >> age;
    cout << "Your age is: " << age << endl;
    return 0;
}
```