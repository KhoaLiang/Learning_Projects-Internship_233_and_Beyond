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
 #include <iostream>

using namespace std;

class Person
{
    private:
        string name;
        int dob;

    public:
        Person(string name, int dob)
        {
            this->name = name;
            this->dob = dob;
        }
        void setName(string name){
            this->name = name;
        }
        string getName(){
            return name;
        }
        void setDob(int dob){
            this->dob = dob;
        }
        int getDob(){
            return dob;
        }
};

class Student : public Person
{
    private:
        double gpa;
    public:
        Student(string name, int dob, double gpa) : Person(name, dob){
            this->gpa = gpa;
        }
        void setGpa(double gpa){
            this->gpa = gpa;
        }
        double getGpa(){
            return gpa;
        }
};

int main()
{
    Student s("Hai", 1999, 8.8);
    cout << "Name: " << s.getName() << endl;
    cout << "Date of birth: " << s.getDob() << endl;
    cout << "GPA: " << s.getGpa() << endl;
    return 0;
}