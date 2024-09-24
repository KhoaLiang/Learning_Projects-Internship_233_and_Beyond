//basic example
// #include <iostream>

// using namespace std;

// class Person
// {
// private:
//     string name;
//     int age;

// public:
//     string getName()
//     {
//         return name;
//     }

//     void setName(string name)
//     {
//         this->name = name;
//     }

//     int getAge()
//     {
//         return age;
//     }

//     void setAge(int age)
//     {
//         this->age = age;
//     }
// };

// // Khai báo lớp Student kế thừa từ lớp Person
// class Student : public Person
// {
// private:
//     double gpa;

// public:
//     double getGpa()
//     {
//         return gpa;
//     }

//     void setGpa(double gpa)
//     {
//         this->gpa = gpa;
//     }
// };

// int main()
// {
//     Student s;
//     s.setName("Thien");
//     s.setAge(32);
//     s.setGpa(7);
//     cout << "Name: " << s.getName() << endl;
//     cout << "Age: " << s.getAge() << endl;
//     cout << "Gpa: " << s.getGpa() << endl;
// }

//children constructor example
// #include <iostream>

// using namespace std;

// class Person
// {
// private:
//     string name;

// public:
//     Person(string name)
//     {
//         this->name = name;
//     }
//     string getName()
//     {
//         return name;
//     }
//     void setName(string name)
//     {
//         this->name = name;
//     }
// };

// class Student : public Person
// {
// public:
//     Student() : Person("Default")
//     {
//     }
// };

// int main()
// {
//     Student s;
//     cout << s.getName();
//     return 0;
// }

//another example, working with person
// #include <iostream>

// using namespace std;

// class Person
// {
//     private:
//         string name;
//         int dob;

//     public:
//         Person(string name, int dob)
//         {
//             this->name = name;
//             this->dob = dob;
//         }
//         void setName(string name){
//             this->name = name;
//         }
//         string getName(){
//             return name;
//         }
//         void setDob(int dob){
//             this->dob = dob;
//         }
//         int getDob(){
//             return dob;
//         }
// };

// class Student : public Person
// {
//     private:
//         double gpa;
//     public:
//         Student(string name, int dob, double gpa) : Person(name, dob){
//             this->gpa = gpa;
//         }
//         void setGpa(double gpa){
//             this->gpa = gpa;
//         }
//         double getGpa(){
//             return gpa;
//         }
// };

// int main()
// {
//     Student s("Hai", 1999, 8.8);
//     cout << "Name: " << s.getName() << endl;
//     cout << "Date of birth: " << s.getDob() << endl;
//     cout << "GPA: " << s.getGpa() << endl;
//     return 0;
// }

//overloading with inheritance
// #include <iostream>

// using namespace std;

// class Person
// {
// private:
//     string name;
//     string gender;

// public:
//     Person(string name, string gender)
//     {
//         this->name = name;
//         this->gender = gender;
//     }

//     string getName()
//     {
//         return name;
//     }

//     void setName(string name)
//     {
//         this->name = name;
//     }

//     string getGender()
//     {
//         return gender;
//     }

//     void setGender(string gender)
//     {
//         this->gender = gender;
//     }

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Gender: " << gender << endl;
//     }
// };

// class Student : Person
// {
//     private:
//         int salary;
//     public:
//         Student(string name, string gender, int salary) : Person(name, gender){
//             this->salary = salary;
//         }
//         void display(){
//             Person::display();
//             cout << "Salary: " << salary;
//         }
// };

// int main()
// {
//     Student s("Trung", "Male", 1700);
//     s.display();
//     return 0;
// }

// making my own person example
// #include <iostream>

// using namespace std;

// class Person
// {
//     private:
//         string name;
//         int age;
//         string address;
//     public:
//         Person(string name, int age, string address){
//             this->name = name;
//             this->age = age;
//             this->address = address;
//         }
//         void setName(string name){
//             this->name = name;
//         }
//         string getName(){
//             return name;
//         }
//         void setAge(int age){
//             this->age = age;
//         }
//         int getAge(){
//             return age;
//         }
//         void setAddress(string address){
//             this->address = address;
//         }
//         string getAddress(){
//             return address;
//         }
//         void display(){
//             cout << "Name: " << name << endl;
//             cout << "Age: " << age << endl;
//             cout << "Address: " << address << endl;
//         }
// };

// class Student : public Person
// {
//     private:
//         double gpa;
//     public:
//         Student(string name, int age, string address, double gpa) : Person(name, age, address){
//             this->gpa = gpa;
//         }
//         void setGpa(double gpa){
//             this->gpa = gpa;
//         }
//         double getGpa(){
//             return gpa;
//         }
//         void display(){
//             Person::display();
//             cout << "GPA: " << gpa << endl;
//         }
// };

// class Teacher : public Person
// {
//     private:
//         int salary;
//     public:
//         Teacher(string name, int age, string address, int salary) : Person(name, age, address){
//             this->salary = salary;
//         }
//         void setSalary(int salary){
//             this->salary = salary;
//         }
//         int getSalary(){
//             return salary;
//         }
//         void display(){
//             Person::display();
//             cout << "Salary: " << salary << endl;
//         }
// };
// int main()
// {
//     Student s("Khanh", 23, "Ha Noi", 9.0);
//     s.display();
//     Teacher t("Tung", 34, "Ha Noi", 1700);
//     t.display();
//     return 0;
// }

//employee and manager example
#include <iostream>

using namespace std;

class Employee{
    private:
        string name;
        int salary;
    public:
        Employee(string name, int salary){
            this->name = name;
            this->salary = salary;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
        void setSalary(int salary){
            this->salary = salary;
        }
        int getSalary(){
            return salary;
        }
        void display(){
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
};

class Manager : public Employee{
    private:
        int bonus;
    public:
        Manager(string name, int salary, int bonus) : Employee(name, salary){
            this->bonus = bonus;
        }
        int getSalary()
        {
            return Employee::getSalary() + bonus;
        }
        void setBonus(int bonus){
            this->bonus = bonus;
        }
        int getBonus(){
            return bonus;
        }
        void display()
        {
            cout << "Name: " << getName() << endl;
            cout << "Salary: " << getSalary() << endl;
        }
};

int main(){
    Manager m("Hai", 1700, 300);
    m.display();
    return 0;
}