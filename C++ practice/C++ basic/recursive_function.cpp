// #include <iostream>

// using namespace std;

// int factorial(int n) {
//     if (n == 1) return 1;
//     return n*factorial(n-1);
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << factorial(n);
//     return 0;
// }
//the above code is to calculate the factorial of a number

// #include <iostream>

// using namespace std;

// int sum(int n) {
//     if (n == 1) return 1;
//     if (n % 2 == 0) {
//         return sum(n-1);
//     } else {
//         return n + sum(n-1);
//     }
// }

// int main() {
//     int n;
//     cin >> n;
//     cout << sum(n);
//     return 0;
// }
//the above code is to calculate the sum of all odd numbers from 1 to n
#include <iostream>

using namespace std;

int sumOfArray(int a[1000], int n) {
    if (n == 1) return a[0];
    int sum = 0;
    return sum = a[n-1] + sumOfArray(a, n-1);
}

int main() {
    int n = 4;
    int arr[1000];
    // cin >> n;
    for (int i = 0; i < n; i++) {
        // cin >> arr[i];
        arr[i] = i;
    }
    int watch = sumOfArray(arr, n);
    cout << sumOfArray(arr, n);
    return 0;
}
//the above code is to calculate the sum of all elements in an array