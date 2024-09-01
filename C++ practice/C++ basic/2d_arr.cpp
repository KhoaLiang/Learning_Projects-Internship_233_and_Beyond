#include<iostream>

using namespace std;

int main() {
	int arr[100][100];
	int line, col, sum = 0;

	cin >> line >> col;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < col; j++) {
			cin >> arr[i][j];
		}
	}
	
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < col; j++) {
			sum += arr[i][j];
		}
	}
    cout << sum;
	return 0;
}

//sum of 2d array elements that can devide by 5
// #include<iostream>

// using namespace std;

// int main() {
// 	int arr[100][100];
// 	int line, col, sum = 0;

// 	cin >> line >> col;
// 	for (int i = 0; i < line; i++) {
// 		for (int j = 0; j < col; j++) {
// 			cin >> arr[i][j];
// 		}
// 	}
	
// 	for (int i = 0; i < line; i++) {
// 		for (int j = 0; j < col; j++) {
// 			if(arr[i][j] % 5 == 0){
//                 sum += arr[i][j];
//             }
// 		}
// 	}
//     cout << sum;
// 	return 0;
// }