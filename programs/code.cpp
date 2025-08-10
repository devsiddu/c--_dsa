
// #include <iostream>
// using namespace std;

// int main()
// {
//     //  cout << (6&10);
//     // cout << (6|10);
//     // cout << (6 ^ 10);
//     // cout << (10 << 2);
//     cout << (10 >> 2);
//     return 0;
// }

// Figure out how to find if a number is power of 2 without any loop

// #include <iostream>
// using namespace std;

// bool isPowerOfTwo(int n)
// {
//     return n > 0 && (n & (n - 1)) == 0;
// }

// int main()
// {
//     cout << boolalpha;
//     cout << isPowerOfTwo(8) << endl;

//     return 0;
// }

// with loops

// #include <iostream>
// using namespace std;

// bool is_power_of_two(int n){
//      if(n <= 0) return false;

//     while(n % 2==0){
//         n/=2;
//     }
//     return n==1;
// }

// int main()
// {
//     cout << boolalpha;
//     cout<< is_power_of_two(8);
//     return 0;
// }

// program to reverse the int number

#include <iostream>
using namespace std;

int reversedInt(int n)
{
    int reversed = 0;
    while (n > 0)
    {
        int digit = n % 10;               // Get last digit
        reversed = reversed * 10 + digit; // Shift left and add digit
        n /= 10;                          // Remove last digit
    }
    return reversed;
}

int main()
{

    cout << reversedInt(1200);
    return 0;
}