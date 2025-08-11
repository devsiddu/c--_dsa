// #include <iostream>
// using namespace std;

// int main()
// {
//     int size = 5;
//     int marks[size];
//     for(int i = 0; i<size; i++){
//         cin >> marks[i];
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << marks[i] << " ";
//     }
// }

// // find the smallest and largest value in array
// #include <iostream>
// #include <climits>
// using namespace std;

// void findSmallestAndLargestNo(int arr[], int size, int &smallest, int &largest)
// {

//     for (int i = 0; i < size; i++)
//     {
//         if (smallest > arr[i])
//         {
//             smallest = arr[i];
//         }
//         if (largest < arr[i])
//         {
//             largest = arr[i];
//         }
//     }
// }

// int main()
// {
//     int arr[3] = {-2, 3, -1};
//     int size = sizeof(arr) / sizeof(int);
//     int smallest = INT_MAX, largest = INT_MIN;
//     findSmallestAndLargestNo(arr, size, smallest, largest);
//     cout << "Smallest value = " << smallest << endl;
//     cout << "Largest value = " << largest << endl;
//     return 0;
// }

// find the smallest and largest value in array and return index values
// #include <iostream>
// #include <climits>
// using namespace std;

// void findSmallestAndLargestNo(int arr[], int size, int &smallestIndex, int &largestIndex)
// {
//     int smallest = INT_MAX, largest = INT_MIN;
//     for (int i = 0; i < size; i++)
//     {
//         if (smallest > arr[i])
//         {
//             smallest = arr[i];
//             smallestIndex = i;
//         }
//         if (largest < arr[i])
//         {
//             largest = arr[i];
//             largestIndex = i;
//         }
//     }
// }

// int main()
// {
//     int arr[5] = {1,3,5,2,-1};
//     int size = sizeof(arr) / sizeof(int);
//     int smallestIndex = 0, largestIndex = 0;
//     findSmallestAndLargestNo(arr, size, smallestIndex, largestIndex);
//     cout << "Smallest value index = " << smallestIndex << endl;
//     cout << "Largest value index = " << largestIndex << endl;
//     return 0;
// }

// Linear Search Program

// #include <iostream>
// using namespace std;

// int linearSearch(int arr[], int size, int target)
// {
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == target)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main()
// {

//     int size = 7;
//     int arr[size] = {1, 2, 4, 5, 6, 2, 3};
//     int target = 10;

//     cout << "The target element found at index : " << linearSearch(arr, size, target);
//     return 0;
// }

// Program to reverse array

// #include <iostream>
// using namespace std;

// int reverseArray(int arr[], int size, int reversedArray[])
// {
//     int j =0;
//     for (int i =size -1; i >= 0; i--)
//     {
//             reversedArray[j] = arr[i];
//             j++;
//     }
// }

// int main()
// {
//     int size = 5;
//     int reversedArray[size];
//     int arr[size] = {5, 4, 3, 2, 1};
//     reverseArray(arr, size, reversedArray);

//     cout << "Reversed array: ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << reversedArray[i] << " ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int reverseArray(int arr[], int size)
// {
//     for (int i = 0; i < size / 2; i++)
//     {
//         int temp = arr[i];
//         arr[i] = arr[size - i-1];
//         arr[size - i-1] = temp;
//     }
// }

// int main()
// {
//     int size = 6;
//     int arr[size] = {5, 6, 4, 3, 2, 1};
//     reverseArray(arr, size);
//     cout << "Reversed String : ";
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// WAF to calculate sum & Prod of all numbers in array

// #include <iostream>
// using namespace std;

// void calSumAndProd(int arr[], int size)
// {
//     int sum = 0, prod = 1;

//     for (int i = 0; i < size; i++)
//     {
//         sum += arr[i];
//         prod *= arr[i];
//     }
//     cout << "Sum = " << sum << endl;
//     cout << "Prod = " << prod << endl;
// }

// int main()
// {

//     int size = 5;
//     int arr[size] = {1, 2, 3, 4, 5};
//     calSumAndProd(arr, size);
//     return 0;
// }

// WAF to swap a min & max values in array

// #include <iostream>
// #include <climits>
// using namespace std;

// int swapMinMax(int arr[], int size)
// {
//     int minIndex = 0, maxIndex = 0;
//     for (int i = 1; i < size; i++)
//     {
//         if (arr[i] < arr[minIndex])
//         {
//             minIndex = i;
//         }

//         if (arr[i] > arr[maxIndex])
//         {
//             maxIndex = i;
//         }
//     }
//     int temp = arr[minIndex];
//     arr[minIndex] = arr[maxIndex];
//     arr[maxIndex] = temp;
// }

// void printValues(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
// int main()
// {
//     int size = 5;
//     int arr[size] = {2, 3, 4, 5, 6};
//     cout << "Before Swapping : ";
//     printValues(arr, size);
//     swapMinMax(arr, size);
//     cout << "\nAfter Swapping : ";
//     printValues(arr, size);

//     return 0;
// }

// WAF to print all unique values in array

// #include <iostream>
// using namespace std;

// void printUnique(int arr[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         bool isUnique = true;
//         for (int j = 0; j < size; j++)
//         {
//             if (i != j && arr[i] == arr[j])
//             {
//                 isUnique = false;
//                 break;
//             }
//         }
//         if (isUnique)
//         {
//             cout << arr[i] << " ";
//         }
//     }
// }

// int main()
// {
//     int size = 6;
//     int arr[size] = {2, 3, 4, 6, 7, 8, 3, 1, 2, 5};
//     cout << "Unique no are : ";
//     printUnique(arr, size);
//     return 0;
// }


// WAF to print the intersection of two array

// arr1 = [1,2,3,4,5], arr2=[1,6,7,8,2]

// #include <iostream>
// using namespace std;

// void printIntersectNo(int arr1[], int arr2[],int size){
//     for(int i = 0; i<size; i++){
//         bool isInterSect = false;
//         for(int j = 0; j<size ;j++){
//             if(arr1[i] == arr2[j]){
//                 isInterSect = true;
//                 break;
//             }
//         }
//         if(isInterSect){
//             cout << arr1[i] << " " ;
//         }
//     }
// }

// int main(){

//     int size = 7;
//     int arr1[size] = {1,2,3,4,5,7}, arr2[size] = {2,3,4,6,7,8,1};
//     printIntersectNo(arr1, arr2, size); 
//     return 0;
// }
