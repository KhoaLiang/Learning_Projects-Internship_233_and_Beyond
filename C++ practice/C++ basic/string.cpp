//this code is to count the number of times a character appears in a string
#include<iostream>

using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == c) {
            count++;
        }
    }
    cout << count;
    return 0;
}

//this code is to find the first position of a character in a string

// #include<iostream>

// using namespace std;

// int main() {
//     string s;
//     char c;
//     cin >> s >> c;
//     int firstPost = -1;
//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] == c) {
//             firstPost = i;
//             break;
//         }
//     }
//     cout << firstPost;
//     return 0;
// }

//this code is to convert all lowercase letters to uppercase letters in a string
// #include<iostream>

// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] >= 'a' && s[i] <= 'z') {
//             s[i] -= 32;
//         }
//     }
//     cout << s;
//     return 0;
// }

//this code is to convert all uppercase letters to lowercase letters in a string
// #include<iostream>

// using namespace std;

// int main() {
//     string s;
//     cin >> s;
    // for (int i = 0; i < s.size(); i++) {
    //     if (s[i] >= 'A' && s[i] <= 'Z') {
    //         s[i] += 32;
    //     }
    // }
//     cout << s;
//     return 0;
// }

//this code is to count the number of uppercase letters in a string
// #include<iostream>

// using namespace std;

// int main() {
// 	string s;
// 	int count = 0;
// 	cin >> s;
// 	for (int i = 0; i < s.size(); i++) {
// 		if (s[i] >= 'A' && s[i] <= 'Z') {
// 			count++;
// 		}
// 	}
// 	cout << count;
// 	return 0;
// }

//this code turn all the 3s in a string to e
// #include<iostream>

// using namespace std;

// int main() {
//     string s;
//     cin >> s;
//     for (int i = 0; i < s.size(); i++) {
//         if (s[i] == '3') {
//             s[i] = 'e';
//         }
//     }
//     cout << s;
//     return 0;
// }

// #include<iostream>

// using namespace std;

// void show(string input){
//     for (int i = 0; i < input.size(); i++) {
//         if (input[i] >= 'A' && input[i] <= 'Z') {
//             input[i] += 32;
//         }
//     }
//     cout << input << endl;
// }

// int main() {
//     string s1, s2, s3;
//     cin >> s1 >> s2 >> s3;
//     show(s1);
//     show(s2);
//     show(s3);
//     return 0;
// }
//the above code is to convert all uppercase letters to lowercase letters in a string


// #include <iostream>

// using namespace std;

// void sortArray(int arr[1000], int n) {
//     int placeHolder = 0;
// 	for(int i = 0; i < n; i++){
//         for(int j = i + 1; j < n; j++){
//             if(arr[i] < arr[j]){
//                 placeHolder = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = placeHolder;
//             }
//         }
//     }
// }

// int main() {
// 	int n;
// 	int arr[1000];
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> arr[i];
// 	}
// 	sortArray(arr, n);
// 	for (int i = 0; i < n; i++) {
// 		cout << arr[i] << " ";
// 	}

// 	return 0;
// }

//the above code is to sort an array in descending order

// #include <iostream>

// using namespace std;

// int maxOfArray(int arr[1000], int n) {
// 	int maxValue = arr[0];
// 	for (int i = 0; i < n; i++) {
// 		if (arr[i] > maxValue) {
// 			maxValue = arr[i];
// 		}
// 	}
// 	return maxValue;
// }

// int main() {
// 	int n1, n2;
// 	int arr1[1000], arr2[1000];
// 	cin >> n1;
// 	for (int i = 0; i < n1; i++) {
// 		cin >> arr1[i];
// 	}
// 	cin >> n2;
// 	for (int i = 0; i < n2; i++) {
// 		cin >> arr2[i];
// 	}

// 	cout << maxOfArray(arr1, n1) << " " << maxOfArray(arr2, n2);

// 	return 0;
// }
//the above code is to find the maximum value of two arrays

// #include <iostream>

// using namespace std;

// int countOddNumberInArray(int arr[1000], int n) {
// 	int count = 0;
// 	for (int i = 0; i < n; i++) {
// 		if (arr[i] % 2 == 1) {
// 			count++;
// 		}
// 	}
// 	return count;
// }

// int main() {
// 	int n;
// 	int arr[1000];
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> arr[i];
// 	}
// 	cout << countOddNumberInArray(arr, n);
// 	return 0;
// }
//the above code is to count the number of odd numbers in an array

// #include <iostream>

// using namespace std;

// void show(string arr[1000], int n) {
// 	for (int i = 0; i < n; i++) {
// 		if (arr[i].size() >= 3) {
// 			cout << arr[i] << " ";
// 		}
// 	}
// }

// int main() {
// 	int n;
// 	string arr[1000];
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		cin >> arr[i];
// 	}
// 	show(arr, n);
// 	return 0;
// }
//the above code is to show the strings that have at least 3 characters in an array