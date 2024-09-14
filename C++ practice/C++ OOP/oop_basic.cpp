//this code is the basic example of OOP in C++

// #include <iostream>

// using namespace std;

// class Student
// {
// public:
//     string name;
//     int age;

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
//     void getInformation()
//     {
//         cin >> this->name;
//         cin >> this->age;
//     }
// };

// int main()
// {
//     Student s1;
//     s1.getInformation();
//     s1.display();
//     return 0;
// }

//2. Calculate the area and circumference of a rectangle using OOP
// #include <iostream>

// using namespace std;

// class Rectangle{
//     private:
//         double length;
//         double width;
//     public:
//         void getInformation(){
//             cin >> this->length;
//             cin >> this->width;
//         }
//         void display(){
//             cout << "Area: " << getArea() << endl;
//             cout << "Perimeter: " << getPerimeter() << endl;
//         }
//         double getArea(){
//             return length * width;
//         }
//         double getPerimeter(){
//             return 2 * (length + width);
//         }
    
// };

// int main()
// {
//     Rectangle r1;
//     r1.getInformation();
//     r1.display();
//     return 0;
// }

//3. Working with constructor in C++
// #include <iostream>

// using namespace std;

// class Student
// {
// private:
//     string name;
//     int age;

// public:
//     Student(string name, int age)
//     {
//         this->name = name;
//         this->age = age;
//     }
//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// int main()
// {
//     Student s1("Long", 24);
//     Student s2("Kien", 29);
//     s1.display();
//     s2.display();
//     return 0;
// }

//4. static member in C++
// #include <iostream>

// using namespace std;

// class Math
// {
// public:
//     static int abs(int x)
//     {
//         return (x < 0) ? -x : x;
//     }
//     static int add(int x, int y)
//     {
//         return x + y;
//     }
//     static int subtract(int x, int y)
//     {
//         return x - y;
//     }
//     static int min(int x, int y)
//     {
//         return (x < y) ? x : y;
//     }
//     static int max(int x, int y)
//     {
//         return (x < y) ? y : x;
//     }
//     static int pow(int x, int y)
//     {
//         int power = 1;
//         for (int i = 0; i < y; i++)
//         {
//             power *= x;
//         }
//         return power;
//     }
// };

// int main()
// {
//     cout << Math::abs(-2) << endl;
//     cout << Math::add(2, 3) << endl;
//     cout << Math::subtract(2, 3) << endl;
//     cout << Math::min(2, 3) << endl;
//     cout << Math::max(2, 3) << endl;
//     cout << Math::pow(2, 3) << endl;
//     return 0;
// }

//5. Medthod overloading in C++
// class ArrayCalculator
// {
// public:
//     static int sumOfArray(int arr[], int n)
//     {
//         int sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum += arr[i];
//         }
//         return sum;
//     }

//     static double sumOfArray(double arr[], int n)
//     {
//         double sum = 0;
//         for (int i = 0; i < n; i++)
//         {
//             sum += arr[i];
//         }
//         return sum;
//     }
// };

// class ArrayCalculator
// {
// public:
//     static int maxOfArray(int arr[], int n)
//     {
//         int maxValue = arr[0];
//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] > maxValue)
//             {
//                 maxValue = arr[i];
//             }
//         }
//         return maxValue;
//     }

//     static double maxOfArray(double arr[], int n)
//     {
//         double maxValue = arr[0];
//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] > maxValue)
//             {
//                 maxValue = arr[i];
//             }
//         }
//         return maxValue;
//     }

//     static int minOfArray(int arr[], int n)
//     {
//         int minValue = arr[0];
//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] < minValue)
//             {
//                 minValue = arr[i];
//             }
//         }
//         return minValue;
//     }

//     static double minOfArray(double arr[], int n)
//     {
//         double minValue = arr[0];
//         for (int i = 1; i < n; i++)
//         {
//             if (arr[i] < minValue)
//             {
//                 minValue = arr[i];
//             }
//         }
//         return minValue;
//     }
// };

//Example
// #include <iostream>

// using namespace std;

// class Student {
//     private:
//         string name;
//         char gender;
//     public:
//         Student(){
//             this->name = "Unknown";
//             this->gender = 'u';
//         }
//         Student(string name)
//         {
//             this->name = name;
//             this->gender = 'u';
//         }
//         Student(char gender)
//         {
//             this->name = "Unknown";
//             this->gender = gender;
//         }
//         Student(string name, char gender)
//         {
//             this->name = name;
//             this->gender = gender;
//         }
//         void display()
//         {
//             cout << "Name: " + name << endl;
//             if (gender == 'u')
//             {
//                 cout << "Gender: Unknown" << endl;
//             }
//             if (gender == 'm')
//             {
//                 cout << "Gender: Male" << endl;
//             }
//             if (gender == 'f')
//             {
//                 cout << "Gender: Female" << endl;
//             }
//         }
// };