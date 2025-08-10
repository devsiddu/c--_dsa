// patterns

// print square pattern
//  #include <iostream>
//  using namespace std;

// int main(){

//     int n = 4;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout << j << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

// print star square pattern

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 4;
//     for (int i = 0; i < n; i++)
//     {
//         char ch ='A';
//         for (int j = 0; j < n; j++)
//         {
//            cout << ch << " ";
//            ch++;
//         }
//         cout << endl;

//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 3;
//     char count = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout << count << " ";
//             count ++;
//         }
//         cout << endl;

//     }
//     cout << "After the Pattern count value : " << count << endl ;
//     return 0;
// }

// triangle patten

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 5;
//     char ch = 'A';
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//   for(int i= 0 ; i<n; i++){
//     for(int j=0; j<=i; j++){
//         cout << j+1 << " ";
//     }
//     cout << endl;
//   }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     for(int i =1 ; i<=n; i++){
//         for(int j =i; j>=1; j--){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (char j = ch; j >= 'A'; j--)
//         {
//             cout << j << " ";

//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }

// floyd's triangle pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n = 4;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout << ch << " ";
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// inverted triangle pattern

// #include <iostream>
// using namespace std;

// int main(){

//     int n = 4;
//     for(int i = 1; i<=n; i++){
//         for(int j=1; j<=i; j++){
//             cout << " " << " ";
//         }
//         for(int j=n-i+1; j>0; j--){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 4;
//     char ch = 'A';
//     for (int i = 1; i <= n; i++)
//     {
//         for(int j = 1; j<=i; j++){
//             cout << " ";
//         }
//         for(int j=1; j<=n-i+1; j++){
//             cout << ch;
//         }
//         ch++;
//         cout << endl;
//     }
//     return 0;
// }

// pyramid pattern

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 8;

//     for (int i = 1; i <= n; i++)
//     {
//         for(int j = 0; j<n-i; j++){
//             cout << " ";
//         }
//         for(int j =1; j<=i; j++){
//             cout << j;
//         }
//         for(int j=i-1; j>0 ;j--){
//             cout << j;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// hallow diamond pattern

// #include <iostream>
// using namespace std;

// int main()
// {

//     int n = 4;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i; j++)
//         {
//             cout << " ";
//         }
//         cout << "*";
//         for (int j = 0; j < 2 * i - 1; j++)
//         {
//             cout << " ";
//         }
//         if (i != 0)
//         {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     for (int i = 1; i < n - 1; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//         {
//             cout << " ";
//         }
//         cout << "*";
//         if (i!=n)
//         {
//             for(int j=0 ; j< 2* (n-i) -5; j++){
//                 cout << " ";
//             }
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main()
{
    int n = 4;

    for(int i =1; i<=n; i++){
        for(int j =1; j<=i;j++){
            cout << "*";
        }
        for(int j = 1; j<=n-i;j++){
            cout << " ";
        }
        for(int j = 1; j<=n-i;j++){
            cout << " ";
        }
        for(int j = 1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    for(int i = 1; i<=n;i++){
        for(int j = n-i+1; j>0; j--){
            cout << "*";
        }
        
        for(int j = 1; j<=i-1;j++){
            cout << " ";
        }
        for(int j = 1; j<=i-1;j++){
            cout << " ";
        }
        for(int j = n-i+1; j>0; j--){
            cout << "*";
        }
        
        cout << endl;
    }
}