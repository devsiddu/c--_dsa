// functions in c++
/*
#include <iostream>
using namespace std;

int print_name(int a,int b){
    return a+b;
}
int main (){
    int result = print_name(10, 20);
    cout << result;
    return 0;
}
*/

// print minimum of 2 no

/*
#include <iostream>
using namespace std;

int minOfTwoNo(int a, int b){
    if(a < b){
        return a;
    }else{
        return b;
    }
}

int main(){
    cout << minOfTwoNo(30, 20);
    return 0;

}
*/

// calculate the sum of n no
/*

#include <iostream>
using namespace std;

void sumOfnNo(int n){
    int sum = 0;
    for(int i =1; i<=n;i++){
        sum +=i;
    }
    cout << sum;
}
int main(){

    sumOfnNo(10);
    return 0;
}
*/

// calculate n factorial

/*
#include <iostream>
using namespace std;

void factorialOfNno(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact *= i;
    }
    cout << fact ;
}
int main(){
factorialOfNno(5);
    return 0;
}
    */

// calculate dum of digitsof a number

// #include <iostream>
// using namespace std;
// void sumOfDigits(int num){

//     int sum = 0;
//     while (num > 0)
//     {
//         int lastDigit = num % 10;
//         num /=10;
//         sum += lastDigit;

//     }
//     cout << "Sum is = : " << sum;
// }

// int main()
// {
//     int num = 12345;
//     sumOfDigits(num);
//     return 0;
// }

// calculate the binomial factorial

// #include <iostream>
// using namespace std;
// int factorial(int n)
// {
//     int nFact = 1;
//     for (int i = n; i >= 1; i--)
//     {
//         nFact *= i;
//     }
//     return nFact;
// }

// int binomial_fact(int n, int r)
// {
//     int nFact = factorial(n);
//     int rFact = factorial(r);
//     int nrFact = factorial(n - r);

//     return nFact / (rFact * nrFact);
// }
// int main()
// {

//     int n = 6, r = 3;
//     cout << binomial_fact(n,r);
//     return 0;
// }

// check id a number is prime or not
// #include <iostream>
// using namespace std;

// int isPrime(int n){
//     bool is_prime = true;

//     for(int i=2; i<n;i++){
//         if(n%i ==0){
//             is_prime = false;
//         }
//     }
//     return is_prime;
// }
// int main()
// {
//     int n = 4;
//     cout << (isPrime(n) ? "Prime": "Not Prime");
//     return 0;
// }

