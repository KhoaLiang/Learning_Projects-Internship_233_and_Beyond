//basic example of encapsulation in C++
// #include <iostream>

// using namespace std;

// class Person
// {
// private:
//     int id;
//     string name;
//     int age;
//     string address;
// public:
//     Person(int id, string name, int age, string address){
//         this->id = id;
//         this->name = name;
//         this->age = age;
//         this->address = address;
//     }
//     int getId(){
//         return this->id;
//     }
//     string getName(){
//         return this->name;
//     }
//     int getAge(){
//         return this->age;
//     }
//     string getAddress(){
//         return this->address;
//     }
// };

// int main()
// {
//     Person p(1001, "Quynh", 24, "Ha Noi");
//     cout << "Id: " << p.getId() << endl;
//     cout << "Name: " << p.getName() << endl;
//     cout << "Age: " << p.getAge() << endl;
//     cout << "Address: " << p.getAddress() << endl;
//     return 0;
// }

//retangle example
// #include <iostream>

// using namespace std;

// class Rectangle{
//     private:
//         double length;
//         double width;
//     public:
//         Rectangle(){
//             this->length = 0;
//             this->width = 0;
//         }
//         Rectangle(double length, double width){
//             this->length = length;
//             this->width = width;
//         }
//         double getArea(){
//             return length * width;
//         }
//         double getPerimeter(){
//             return 2 * (length + width);
//         }
//         void setLength(double length){
//             this->length = length;
//         }
//         void setWidth(double width){
//             this->width = width;
//         }
//         double getLength(){
//             return this->length;
//         }
//         double getWidth(){
//             return this->width;
//         }

// };

// int main()
// {
//     Rectangle r(4, 5);
//     cout << "Area: " << r.getArea() << endl;
//     cout << "Perimeter: " << r.getPerimeter() << endl;
//     r.setLength(2);
//     r.setWidth(3);
//     cout << "Area: " << r.getArea() << endl;
//     cout << "Perimeter: " << r.getPerimeter() << endl;
//     return 0;
// }

//student example
// #include <iostream>

// using namespace std;

// class Student{
//     private:
//         int id;
//         string name;
//         int age;
//         string address;
//         int score;
//     public:
//         Student(){
//             this->id = 0;
//             this->name = "Unknown";
//             this->age = 0;
//             this->address = "Unknown";
//             this->score = 0;
//         }
//         Student(int id, string name, int age, string address, int score){
//             this->id = id;
//             this->name = name;
//             this->age = age;
//             this->address = address;
//             this->score = score;
//         }
//         void setId(int id){
//             this->id = id;
//         }
//         int getId(){
//             return this->id;
//         }
//         void setName(string name){
//             this->name = name;
//         }
//         string getName(){
//             return this->name;
//         }
//         void setAge(int age){
//             this->age = age;
//         }
//         int getAge(){
//             return this->age;
//         }
//         void setAddress(string address){
//             this->address = address;
//         }
//         string getAddress(){
//             return this->address;
//         }
//         void setScore(int score){
//             if(score >= 0 && score <= 10){
//                 this->score = score;
//             }
//         }
//         int getScore()
//         {
//             return this->score;
//         }
// };

// int main()
// {
//     Student s(1001, "Trung", 24, "Ha Noi", 5);
//     cout << s.getId() << endl;
//     ;
//     cout << s.getName() << endl;
//     ;
//     cout << s.getAge() << endl;
//     ;
//     cout << s.getAddress() << endl;
//     ;
//     cout << s.getScore() << endl;
//     ;
//     s.setScore(-7);
//     cout << s.getScore() << endl;
//     ;
//     s.setScore(15);
//     cout << s.getScore() << endl;
//     ;
//     return 0;
// }

//time example
// #include <iostream>

// using namespace std;

// class Time
// {
// private:
//     int hour;
//     int minute;
//     int second;

// public:
//     Time(int hour, int minute, int second)
//     {
//         this->hour = hour;
//         this->minute = minute;
//         this->second = second;
//     }
//     void setTime(int hour, int minute, int second)
//     {
//         this->hour = hour;
//         this->minute = minute;
//         this->second = second;
//     }
//     void setHour(int hour)
//     {
//         this->hour = hour;
//     }
//     void setMinute(int minute)
//     {
//         this->minute = minute;
//     }
//     void setSecond(int second)
//     {
//         this->second = second;
//     }
//     int getHour()
//     {
//         return this->hour;
//     }
//     int getMinute()
//     {
//         return this->minute;
//     }
//     int getSecond()
//     {
//         return this->second;
//     }
//     void nextSecond(){
//         if(getHour() == 23 && getMinute() == 59 && getSecond() == 59){
//             setHour(0);
//             setMinute(0);
//             setSecond(0);
//         }
//         if (getHour() != 23 && getMinute() == 59 && getSecond() == 59)
//         {
//             setHour(this->hour + 1);
//             setMinute(0);
//             setSecond(0);
//         }
//         if (getHour() != 23 && getMinute() != 59 && getSecond() == 59)
//         {
//             setMinute(this->minute + 1);
//             setSecond(0);
//         }
//         else{
//             setSecond(this->second + 1);
//         }
//     }
//     void previousSecond()
//     {
//         if (hour == 0 && minute == 0 && second == 0)
//         {
//             hour = 23;
//             minute = 59;
//             second = 59;
//             return;
//         }
//         if (minute == 0 && second == 0)
//         {
//             hour--;
//             minute = 59;
//             second = 59;
//             return;
//         }
//         if (second == 0)
//         {
//             minute--;
//             second = 59;
//             return;
//         }
//         second--;
//     }
//     void display()
//     {
//         string hour = to_string(this->hour);
//         string minute = to_string(this->minute);
//         string second = to_string(this->second);
//         if (hour.length() == 1)
//             hour = "0" + hour;
//         if (minute.length() == 1)
//             minute = "0" + minute;
//         if (second.length() == 1)
//             second = "0" + second;
//         cout << hour + ":" << minute + ":" + second << endl;
//     }
// };

// int main()
// {
//     Time t(12, 1, 1);
//     t.display();
//     t.setTime(23, 59, 59);
//     t.display();
//     t.nextSecond();
//     t.display();
//     t.nextSecond();
//     t.display();
//     t.setTime(7, 0, 0);
//     t.display();
//     t.previousSecond();
//     t.display();
//     return 0;
// }

//2d point example

// #include <math.h>
// #include <iostream>
// using namespace std;

// class Point
// {
// private:
//     double x;
//     double y;

// public:
//     Point()
//     {
//     }

//     Point(double x, double y)
//     {
//         this->x = x;
//         this->y = y;
//     }

//     double getX()
//     {
//         return x;
//     }

//     void setX(double x)
//     {
//         this->x = x;
//     }

//     double getY()
//     {
//         return y;
//     }

//     void setY(double y)
//     {
//         this->y = y;
//     }

//     void setXY(double x, double y)
//     {
//         this->x = x;
//         this->y = y;
//     }

//     double distance(double x, double y)
//     {
//         return sqrt((this->x - x) * (this->x - x) + (this->y - y) * (this->y - y));
//     }

//     double distance(Point another)
//     {
//         return distance(another.getX(), another.getY());
//     }
// };

// int main()
// {
//     Point p1(1.5, 6.7);
//     Point p2(2.8, 3.2);
//     cout << p1.distance(p2) << endl;
//     cout << p1.distance(2.34, 7.8) << endl;
//     return 0;
// }

//bank account example

#include <iostream>

using namespace std;

class Account
{
private:
    int id;
    string name;
    int balance = 0;

public:
    Account(int id, string name)
    {
        this->id = id;
        this->name = name;
    }

    Account(int id, string name, int balance)
    {
        this->id = id;
        this->name = name;
        this->balance = balance;
    }

    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    int getBalance()
    {
        return balance;
    }
    void deposit(int amount)
    {
        balance += amount;
    }
    void withdraw(int amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
        }
        else
        {
            cout << "That amount exceeds your current balance." << endl;
        }
    }
    void display()
    {
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    Account account1(1000, "Tuan", 2000);
    account1.display();
    account1.withdraw(2100);
    account1.deposit(600);
    cout << "Balance: " << account1.getBalance() << endl;
    account1.withdraw(2100);
    cout << "Balance: " << account1.getBalance() << endl;
    return 0;
}