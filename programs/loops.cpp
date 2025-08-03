// Loops i c++

// types of loops
// 1. while loop
// 2. for loop
// 3. do-while loop

// 1. while loop
// syntax of while loop

//  while(condition){
//     //statement
//     inc/ dic
//  }

// 1. while loop
// syntax of while loop

//  while(condition){
//     //statement
//     inc/ dic
//  }

// #include <iostream>
// using namespace std;

// int main(){
//     int count = 1;

//     while (count <= 10)
//     {
//         cout << count << " ";
//         count ++;
//     }

//     return 0;
// }

// 1. for loop
// syntax of while loop

//  for(initialization; condition; increment / decrement)){
//     //statement
//  }

// #include <iostream>
// using namespace std;

// int main(){
//     int n = 10;

//     for(int count = 1; count <= n; count ++){
//         cout << count << " ";
//     }

//     return 0;
// }

// Example

// sum of numbers 1 to n through for loop
// #include <iostream>
// using namespace std;
// int main(){
//     int n =10;
//     int sum = 0;

//     for (int count = 0; count < n; count++)
//     {
//         sum += count;
//     }
//     cout << sum ;

// }

// // sum of numbers 1 to n through while loop
// #include <iostream>
// using namespace std;
// int main(){
//     int n =10;
//     int sum = 0;
//     int count =0;
//     while(count <=n)
//     {
//         sum += count;
//         count ++;
//     }
//     cout << sum ;

// }

// break keyword

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

// sum of odd numbers 1 to n
// // Approach 1

// #include <iostream>
// using namespace std;
// int main(){
//     int n =5;
//     int sum = 0;
//     int count =1;
//     while(count <=n)
//     {
//         sum += count;
//         count += 2;
//     }
//     cout << sum ;

// }

// Approach 2

// #include <iostream>
// using namespace std;
// int main(){
//     int n =5;
//     int sum = 0;
//     for(int count = 1; count <=n; count += 2){
//         sum += count;
//     }
//     cout << sum ;

// }

// Approach 2

// #include <iostream>
// using namespace std;
// int main()
// {
//     int n = 5;
//     int sum = 0;
//     for (int count = 1; count <= n; count++)
//     {
//         if (count % 2 != 0)
//         {
//             sum += count;
//         }
//     }
//     cout << sum;
//   return 0;
// }

// 3. do-while loop

// Example

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10;
//     int count = 0;
//     do
//     {
//         cout << count << " ";
//         count ++;
//     } while (count <= n);

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 7;
//     bool isPrime = true;

//     for (int i = 2; i <= n - 1; i++)
//     {
//         if (n % i == 0)
//         {
//             isPrime = false;
//             break;
//         }
//     }
//     (isPrime) ? cout << "Prime No " : cout << "None Prime";
//     return 0;
// }

// Nested loops

// example

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 5;
//     int m = 10;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= m; j++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// program to calculate the sum no divisible by 3 , 1 to n

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 10;
//     int sum = 0;
//     for (int count = 1; count <= n; count++)
//     {
//         if (count % 3 == 0)
//         {
//             sum += count;
//         }
        
//     }
//     cout << "Sum of total no numbers: " << sum ;
//     return 0;
// }

// program to calculate the factorial  1 to n

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int fact = 1;
//     for (int count = 1; count <= n; count++)
//     {
//         fact *= count;
//     }
//     cout << "Factorial of total no numbers: " << fact ;
//     return 0;
// }