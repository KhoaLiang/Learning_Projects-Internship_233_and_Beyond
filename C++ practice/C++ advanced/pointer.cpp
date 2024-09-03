//1. basic example of pointer
// #include<iostream>

// using namespace std;

// int main() {
// 	int a = 5;
// 	int* p;
// 	p = &a;
// 	*p = 20;
// 	cout << "Value of a: " << a;
// 	return 0;
// }
//output: Value of a: 20


//2. size of ancient data type
// #include <iostream>

// using namespace std;

// int main() {
// 	cout << "size of char: " << sizeof(char) << endl;
// 	cout << "size of int: " << sizeof(int) << endl;
// 	cout << "size of short: " << sizeof(short) << endl;
// 	cout << "size of long long: " << sizeof(long long) << endl;
// 	cout << "size of float: " << sizeof(float) << endl;
// 	cout << "size of double: " << sizeof(double) << endl;
// 	return 0;
// }

//3. size of pointer are all the same and based on the system that we built on
// #include <iostream>

// using namespace std;

// int main() {
// 	int number = 9;
// 	int* p1 = &number;
// 	char* p2 = (char*)&number;
// 	double* p3 = (double*)&number;
// 	cout << "size of p1: " << sizeof(p1) << endl;
// 	cout << "size of p2: " << sizeof(p2) << endl;
// 	cout << "size of p3: " << sizeof(p3) << endl;
// 	return 0;
// }

// Có thể thấy kích thước của các con trỏ kiểu char*, int* và double* là như nhau. Nếu bạn build ứng dụng trên platform x64 thì kích thước của con trỏ sẽ là 8, ngược lại nếu bạn build ứng dụng trên platform x86 thì kích thước của con trỏ sẽ là 4. Nếu bạn không hiểu build ứng dụng x64 và x86 là gì thì build ứng dụng x64 là tạo ra ứng dụng 64 bit, build x86 là tạo ra ứng dụng 32 bit.

// Lý do kết quả có thể là 4 hoặc 8 là do giá trị của một con trỏ luôn là 1 địa chỉ mà ứng dụng x32 sẽ có 232 địa chỉ (232 ô nhớ - tương đương với kiểu dữ liệu có kích thước 4 byte), ứng dụng x64 sẽ có 264 địa chỉ (264 ô nhớ - tương đương với kiểu dữ liệu có kích thước 8 byte) nên con trỏ cần phải được cấp phát đủ bộ nhớ để lưu trữ được các địa chỉ này. Vì thế nên kích thước của con trỏ sẽ phụ thuộc vào platform mà bạn build.

//4. pass by value
// #include <iostream>

// using namespace std;

// void inc(int a) {
//     a++;
// }

// int main() {
//     int a = 5;
//     inc(a);
//     cout << "Value of a: " << a;
//     return 0;
// }
//as we can see the value of a stay the same because we pass the value of a to the function inc, so the value of a in the function inc is a copy of the value of a in the main function. Therefore, when we change the value of a in the function inc, it doesn't affect the value of a in the main function.

//5. pass by reference
// #include <iostream>

// using namespace std;

// void change(int* p) {
//     (*p)++;
// }

// int main() {
//     int a = 7;
//     //cin >> a;
//     change(&a);
//     cout << "New value of a: " << a;
//     return 0;
// }

//6a. Pass by reference using reference
// #include <iostream>

// using namespace std;

// void toUpper(string &s) {
// 	for (int i = 0; i < s.size(); i++) {
// 		if (s[i] >= 'a' && s[i] <= 'z') {
// 			s[i] -= 32;
// 		}
// 	}
// }

// int main() {
// 	string s;
// 	cin >> s;
// 	toUpper(s);
// 	cout << s;
// 	return 0;
// }

//6b. Pass by reference using pointer
#include <iostream>

using namespace std;

void toUpper(string *s) {
	for (int i = 0; i < (*s).size(); i++) {
		if ((*s)[i] >= 'a' && (*s)[i] <= 'z') {
			(*s)[i] -= 32;
		}
	}
}

int main() {
	string s;
	cin >> s;
	toUpper(&s);
	cout << s;
	return 0;
}