# Conditional statements in c++

### Types of conditional statements
### 1. if-else
#### Example
```c++
#include <iostream>
using namespace std;

int main()
{

    int n = -1;
    if (n >= 0)
    {
        cout << "n is positive";
    }else{
        cout << "n is negative";
    }

    return 0;
}
```
##### Output

```
n is negative
```

## Real time example for if-else
### 1. Voting system , user age is more then 18 year user can vote else in not vote

```c++
#include <iostream>
using namespace std;

int main()
{
    // declare age variable
    int age;

    // taking age from user
    cout << "Enter your age: ";
    cin >> age;

    if (age >= 18)
    {
        cout << "You can Vote\n";
    }else{
        cout << "You can' Vote\n";
    }

    return 0;
}
```
##### Output

```
Enter your age: 19
You can Vote
```

### 2. Program to check number is odd or even

```c++
#include <iostream>
using namespace std;

int main()
{
    int n = 12;

    if (n % 2 == 0)
    {
        cout << "n is even number";
    }
    else
    {
        cout << "n is odd number";
    }
    return 0;
}
```
#### Output
```
n is even number
```
### 2. if-else if-else

#### Example
```c++
#include <iostream>
using namespace std;

int main()
{
    int marks;
    cout << "Enter Marks : ";
    cin >> marks;

    if (marks >= 90)
    {
        cout << "Grade : A\n";
    }
    else if (marks >= 80 && marks < 90)
    {
        cout << "Garde : B\n";
    }else{
        cout << "Grade : C\n";
    }

    return 0;
}
```
#### Output
```
Enter Marks : 90
Garde : A
```


### 2. Find character is lowercase or uppercase

#### Approach 1 using builtIn Method
```c++
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a letter : ";
    cin >> ch;

    if (islower(ch))
    {
        cout << "Character is LowerCase";
    }
    else
    {
        cout << "Character is UpperCase";
    }
  return 0;
}
```
#### Output
```
Enter a letter : a
Character is LowerCase
```

#### Approach 2 : comparing with letters
```c++
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter character : ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "character is lowercase\n";
    }
    else
    {
        cout << "character is upperCase\n";
    }
    return 0;
}
```
#### Output
```
Enter character : A
character is upperCase
```

#### Approach 3 : comparing with ascii values
```c++
#include <iostream>
using namespace std;

int main()
{
    char ch;
    cout << "Enter character : ";
    cin >> ch;
    if (ch >= 97 && ch <= 123)
    {
        cout << "character is lowercase\n";
    }
    else
    {
        cout << "character is upperCase\n";
    }
    return 0;
}
```
#### Output
```
Enter character : a
character is lowercase
```


### 3. Ternary Statement
```c++
#include <iostream>
using namespace std;

int main()
{
    int age = 19;
    (age >= 18) ? cout << "You can vote" : cout << "You Can't vote"; 
    return 0;
}
```

#### Output
```
You can vote
```

<center><strong>Happy Learning</strong></center>