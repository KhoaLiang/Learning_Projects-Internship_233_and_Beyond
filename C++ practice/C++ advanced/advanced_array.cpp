//array as parameter
// #include <iostream>

// using namespace std;

// int getMaxValue(int* p, int n) {
//     int max = p[0]; // Initialize max with the first element
//     for (int i = 1; i < n; i++) { // Start from the second element
//         if (p[i] > max) {
//             max = p[i];
//         }
//     }
//     return max;
// }

// int main() {
//     int n;
//     int arr[100];
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     cout << "Max value = " << getMaxValue(arr, n);
//     return 0;
// }

//dynamic array with new int[n]
// #include <iostream> 

// using namespace std;

// int main() {
// 	int n;
// 	int* arr;
// 	cin >> n;
// 	// Thực hiện cấp phát bộ nhớ động cho mảng
// 	arr = new int[n];
// 	// Nhập dữ liệu cho mảng
// 	for (int i = 0; i < n; i++) {
// 		cin >> arr[i];
// 	}
// 	// Tính tổng các phần tử trong mảng và lưu vào biến sum
// 	int sum = 0;
//     for (int i = 0; i < n; i++) {
//         sum += arr[i];
//     }
// 	cout << "Sum = " << sum;
// 	delete []arr;
// 	return 0;
// }

//dynamic array is the array that we can change the size of the array during the runtime and it's just like a normal array but you must manage the memory by yourself. In C++, we can create a dynamic array by using the new keyword. The syntax to create a dynamic array is: new. Remember to delete the dynamic array after you finish using it to avoid memory leak.
// #include <iostream> 

// using namespace std;

// int main() {
// 	int n;
// 	int* arr;
// 	cin >> n;
// 	// Thực hiện cấp phát bộ nhớ động cho mảng
// 	arr = new int[n];
// 	// Nhập dữ liệu cho mảng
// 	for (int i = 0; i < n; i++) {
// 		cin >> arr[i];
// 	}
// 	// Hiển thị ra màn hình các số chia hết cho 3 và không chia hết cho 5 trong arr
// 	for (int i = 0; i < n; i++) {
// 		if(arr[i] % 3 == 0 && arr[i] % 5 != 0){
//             cout << arr[i] << " ";
//         }
// 	}
// 	delete[]arr;
// 	return 0;
// }

// //7. 2D array dynamic
// #include<iostream>

// using namespace std;

// int main() {
// 	int n, m;
// 	cin >> n >> m;

// 	// Khai báo con trỏ cấp 2 arr, we can understand arr is an array of n elements, each element is a pointer to an array which is a pointer in itself
// 	int** arr;

// 	// Cấp phát vùng nhớ động cho mảng 1 chiều các con trỏ kiểu int*
// 	// Có thể hiểu arr là mảng n phần tử, mỗi phần tử là 1 con trỏ kiểu int*
// 	arr = new int* [n];
// 	for (int i = 0; i < n; i++) {
// 		// Cấp phát động cho các n mảng 1 chiều
// 		arr[i] = new int[m];
// 	}

// 	// Nhập dữ liệu cho các phần tử trong mảng
// 	for (int i = 0; i < n; i++) {
// 		for (int j = 0; j < m; j++) {
// 			cin >> arr[i][j];
// 		}
// 	}

// 	// Tính tổng từng hàng và hiển thị ra màn hình
// 	for (int i = 0; i < n; i++) {
// 		int sum = 0;
// 		for (int j = 0; j < m; j++) {
// 			sum += arr[i][j];
// 		}
// 		cout << sum << endl;
// 	}

// 	// Giải phóng bộ nhớ
// 	for (int i = 0; i < n; i++) {
// 		// Giải phóng bộ nhớ con các mảng một chiều
// 		delete[] arr[i];
// 	}
// 	// Giải phóng bộ nhớ cho mảng các con trỏ
// 	delete[]arr;
// 	return 0;
// }

//Pass by reference using address
// #include<iostream>

// using namespace std;

// void resize(int*& arr, int newSize) {
// 	delete[] arr;
// 	arr = new int[newSize];
// }

// int main() {
// 	int* arr = new int[10];
// 	resize(arr, 1000);
// 	for (int i = 0; i < 1000; i++) {
// 		arr[i] = i;
// 	}
// 	for (int i = 0; i < 1000; i++) {
// 		cout << arr[i] << " ";
// 	}
// 	delete[]arr;
// 	return 0;
// }

//Pass by reference using pointer
#include<iostream>

using namespace std;

void resize(int** arr, int newSize) {
	delete[] *arr;
	*arr = new int[newSize];
}

int main() {
	int* arr = new int[10];
	resize(&arr, 1000);
	for (int i = 0; i < 1000; i++) {
		arr[i] = i;
	}
	for (int i = 0; i < 1000; i++) {
		cout << arr[i] << " ";
	}
	delete[]arr;
	return 0;
}