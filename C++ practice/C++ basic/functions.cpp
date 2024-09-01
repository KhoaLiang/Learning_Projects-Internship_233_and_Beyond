#include<iostream>

using namespace std;

// Khai báo hàm show
void show() {
	// Hiển thị ra màn hình các số từ 1 đến 10
	for (int i = 1; i <= 100; i++) {
		cout << i << " ";
	}
}

int main() {
	// Gọi hàm show
	show();
	return 0;
}
//the above code is to show the numbers from 1 to 100

// #include<iostream>

// using namespace std;

// void show() {
// 	for (int i = 1; i <= 100; i++) {
// 		if (i % 3 == 0 && i % 5 != 0) {
// 			cout << i << " ";
// 		}
// 	}
// }

// int main() {
// 	show();
// 	return 0;
// }
//the above code is to show the numbers from 1 to 100 that are divisible by 3 but not by 5

// #include<iostream>

// using namespace std;

// void show(string input){
//     cout << "Hello " << input;
// }

// int main() {
// 	string name;
// 	cin >> name;
// 	show(name);
// 	return 0;
// }

//the above code is to show Hello followed by the input string