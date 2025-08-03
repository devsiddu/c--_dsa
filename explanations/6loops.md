## Loops i c++

### Types of loops
1. while loop
2. for loop
3. do-while loop

### 1. while loop
- Syntax of while loop
```c++
 while(condition){
    //statement
    inc/ dic
 }
```
#### Example
```c++
#include <iostream>
using namespace std;

int main(){
    int count = 1;

    while (count <= 10)
    {
        cout << count << " ";
        count ++;
    }

    return 0;
}
```

#### Output
```
1 2 3 4 5
```

### 2. for loop
- syntax of while loop
```c++
 for(initialization; condition; increment / decrement)){
    //statement
 }
```
#### Example 1
```c++
#include <iostream>
using namespace std;

int main(){
    int n = 10;

    for(int count = 1; count <= n; count ++){
        cout << count << " ";
    }

    return 0;
}
```

#### Output
```
1 2 3 4 5 6 7 8 9 10
```

#### Example 2

- sum of numbers 1 to n through for loop
```c++
#include <iostream>
using namespace std;
int main(){
    int n =10;
    int sum = 0;

    for (int count = 0; count < n; count++)
    {
        sum += count;
    }
    cout << sum ;

}
```
#### Output
```
55
```

- sum of numbers 1 to n through while loop
```c++
#include <iostream>
using namespace std;
int main(){
    int n =10;
    int sum = 0;
    int count =0;
    while(count <=n)
    {
        sum += count;
        count ++;
    }
    cout << sum ;

}
```

#### Output
```
55
```

#### break keyword
```c++
#include <iostream>
using namespace std;
int main(){
    int n =10;
    int sum = 0;
    int count =1;
    while(count <=n)
    {
        if (count == 5)
        {
            break;
        }
        sum += count;

        count ++;
    }
    cout << sum ;

}
```

#### Output
```
10
```


- sum of odd numbers 1 to n
#### Approach 1
```c++
#include <iostream>
using namespace std;
int main(){
    int n =5;
    int sum = 0;
    int count =1;
    while(count <=n)
    {
        sum += count;
        count += 2;
    }
    cout << sum ;

}
```

#### Output
```
9
```

#### Approach 2
```c++
#include <iostream>
using namespace std;
int main(){
    int n =5;
    int sum = 0;
    for(int count = 1; count <=n; count += 2){
        sum += count;
    }
    cout << sum ;

}
```

#### Output
```
9
```

#### Approach 3
```c++
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int sum = 0;
    for (int count = 1; count <= n; count++)
    {
        if (count % 2 != 0)
        {
            sum += count;
        }
    }
    cout << sum;
  return 0;
}
```

#### Output
```
9
```

### 3. do-while loop

#### Example
```c++
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int count = 0;
    do
    {
        cout << count << " ";
        count ++;
    } while (count <= n);

    return 0;
}
```

#### Output
```
0 1 2 3 4 5 6 7 8 9 10
```

- Program to check no is prime or not
```c++
#include <iostream>
using namespace std;

int main()
{
    int n = 7;
    bool isPrime = true;

    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    (isPrime) ? cout << "Prime No " : cout << "None Prime";
    return 0;
}
```

#### Output
```
Prime No
```


### Nested loops

#### Example
```c++
#include <iostream>
using namespace std;

int main()
{

    int n = 5;
    int m = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
```

#### Output
```
* * * * * 
* * * * *
* * * * *
* * * * *
* * * * *

```


- program to calculate the sum no divisible by 3 , 1 to n
```c++
#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int sum = 0;
    for (int count = 1; count <= n; count++)
    {
        if (count % 3 == 0)
        {
            sum += count;
        }
        
    }
    cout << "Sum of total numbers: " << sum ;
    return 0;
}
```

#### Output
```
Sum of total numbers18
```

- program to calculate the factorial  1 to n
```c++
#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int fact = 1;
    for (int count = 1; count <= n; count++)
    {
        fact *= count;
    }
    cout << "Factorial of total numbers: " << fact ;
    return 0;
}
```

#### Output
```
Factorial of total numbers: 120
```

<center><strong>Happy Learning</strong></center>