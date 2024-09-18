// Implement function

//     void
//     printArray(int n)
// {
// }

// to print 0, 1, 2, ..., n(n is positive integer and has no space at the end).

//                        Please note that you can't using key work for, while, goto (even in variable names, comment).

//                        For this exercise,
//     we have #include<iostream> and using namespace std;

// For example :

//     Test Result
//  printArray(5);
//      0, 1, 2, 3, 4, 5 
//  printArray(10);
//      0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

// #include <iostream>

// using namespace std;

// // Implement function
// void printArray(int n)
// {
//     //base case
//     if(n == 0){
//         cout << 0;
//     }
//     //recursive case
//     else{
//         printArray(n-1);
//         cout << ", " << n;
//     }
// }

// int main()
// {
//     printArray(5);
//     cout << endl;
//     printArray(10);
//     cout << endl;
//     return 0;
// }


//excersice 2
// Given a positive number, print following a pattern without using any loop.

//                          Input : n = 16 Output : 16,
//                                  11, 6, 1, -4, 1, 6, 11, 16(has no space at the end)

//                                                              Input : n = 10 Output : 10,
//                                  5, 0, 5, 10(has no space at the end)We basically first reduce 5 one by one until we reach a negative or 0. After we reach 0 or negative, we one add 5 until we reach n.Note : Please note that you can't using key work for, while, goto (even in variable names, comment).

//                                                                                                                                                                                                                You can implement other recursive functions if needed.

//                                                                                                                                                                                                                For this exercise,
//                                  we have #include<iostream> and using namespace std;

// For example :

//     Test Result
//         printPattern(14);
// 14 9 4 - 1 4 9 14
// #include <iostream>

// using namespace std;

// // Implement function
// void printPattern(int n)
// {
//     //base case
//     if(n <= 0){
//         cout << n;
//     }
//     //recursive case
//     else{
//         cout << n << " ";
//         printPattern(n-5);
//         cout << " " << n;
//     }
// }

// int main()
// {
//     printPattern(16);
//     cout << endl;
//     printPattern(10);
//     cout << endl;
//     printPattern(14);
//     cout << endl;
//     return 0;
// }

//excersice 3
// Implement function int findMax(int *arr, int length) {}
// to find the largest element using recursion(with length is the number of elements in integer array arr).Please note that you can't using key work for, while, goto (even in variable names, comment). For this exercise, we have #include<iostream> and using namespace std;

// For example :

//     Test Result int arr[] = {10, 5, 7, 9, 15, 6, 11, 8, 12, 2};
// cout << findMax(arr, 10);
// 15
// #include <iostream>

// using namespace std;

// // Implement function
// int findMax(int *arr, int length) {
//     //base case
//     if(length == 1){
//         return arr[0];
//     }
//     //recursive case
//     else{
//         return max(arr[length-1], findMax(arr, length-1));
//     }
// }

// int main()
// {
//     int arr[] = {10, 5, 7, 9, 15, 6, 11, 8, 12, 2};
//     cout << findMax(arr, 10) << endl; // Should output 15
//     return 0;
// }

//excersice 4
// Implement function

//     bool
//     isPalindrome(string str)
// {
// }
// to check if the given non empty string is palindrome, else not palindrome using recursion.

// In test case, for extra point, we will have some palindrome sentences (All remaining test cases are words).



// Please note that you can't using key work for, while, goto (even in variable names, comment).

// For this exercise, we have #include <iostream>, #include <string.h> and using namespace std;

#include <iostream>
#include <string.h>

using namespace std;

// Implement function
bool isPalindrome(string str) {
    
}

int main()
{
    cout << isPalindrome("racecar") << endl;                     // Should output 1 (true)
    cout << isPalindrome("hello") << endl;                       // Should output 0 (false)
    cout << isPalindrome("A man a plan a canal Panama") << endl; // Should output 1 (true) if spaces and cases are ignored
    return 0;
}