//basic struct example
// #include<iostream>

// using namespace std;

// struct Student {
// 	string name;
// 	int age;
// };

// int main() {
// 	Student Tuan;
//     cin >> Tuan.name >> Tuan.age;
//     cout << "Name: " << Tuan.name << endl;
//     cout << "Age: " << Tuan.age;
// 	return 0;
// }

//working with struct
// #include<iostream>

// using namespace std;

// struct Student {
// 	string name;
// 	int age;
// 	int score;
// };

// int main() {
// 	int n;
// 	cin >> n;
// 	Student *students = new Student[100];
// 	for(int i = 0; i < n; i++){
//         cin >> students[i].name >> students[i].age >> students[i].score;
//     }
//     Student s = students[0];
// 	for (int i = 1; i < n; i++) {
// 		if (students[i].score > s.score) {
// 			s = students[i];
// 		}
// 	}

// 	cout << "Name: " << s.name << endl;
// 	cout << "Age: " << s.age << endl;
// 	cout << "Score: " << s.score;
// 	delete[] students;
// 	return 0;
// }

//struct can have methods
// #include<iostream>

// using namespace std;

// struct Student {
// 	string name;
//     int age;
// 	void display() {
// 		cout << "Name: " << name << endl;
// 		cout << "Age: " << age << endl;
// 	}
// 	void getInformation() {
// 		cin >> name >> age;
// 	}
// };

// int main() {
// 	int n;
// 	Student students[100];
// 	cin >> n;
// 	for (int i = 0; i < n; i++) {
// 		students[i].getInformation();
// 	}
// 	for (int i = 0; i < n; i++) {
// 		students[i].display();
// 	}
// 	return 0;
// }

//size of
#include <iostream>

using namespace std;

struct MyStruct
{
    char a;
    int b;
    short c;
    short d;
    double e;
};

int main()
{
    cout << sizeof(MyStruct);
    return 0;
}