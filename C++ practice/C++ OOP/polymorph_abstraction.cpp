// #include <iostream>

// using namespace std;

// class Animal
// {
//     public:
//         virtual void sound()
//         {
//             cout << "Animal sound" << endl;
//         }
// };

// class Dog : public Animal
// {
//     public:
//         void sound()
//         {
//             cout << "Dog sound" << endl;
//         }
// };

// class Cat : public Animal
// {
//     public:
//         void sound()
//         {
//             cout << "Cat sound" << endl;
//         }
// };

// class Duck : public Animal
// {
//     public:
//         void sound()
//         {
//             cout << "Duck sound" << endl;
//         }
// };

// int main()
// {
//     Animal *animals[4];
//     animals[0] = new Animal();
//     animals[1] = new Dog();
//     animals[2] = new Cat();
//     animals[3] = new Duck();
//     for (int i = 0; i < 4; i++)
//     {
//         animals[i]->sound();
//     }
//     return 0;
// }

//person example

// #include <iostream>

// using namespace std;

// class Person
// {
// private:
//     string name;
//     string address;

// public:
//     Person(string name, string address)
//     {
//         this->name = name;
//         this->address = address;
//     }

//     virtual void display() = 0;

//     string getName()
//     {
//         return name;
//     }

//     void setName(string name)
//     {
//         this->name = name;
//     }

//     string getAddress()
//     {
//         return address;
//     }

//     void setAddress(string address)
//     {
//         this->address = address;
//     }
// };

// class Employee : public Person
// {
// private:
//     int salary;

// public:
//     Employee(string name, string address, int salary) : Person(name, address)
//     {
//         this->salary = salary;
//     }

//     void display()
//     {
//         cout << "Employee name: " << Person::getName() << endl;
//         cout << "Employee address: " << Person::getAddress() << endl;
//         cout << "Employee salary: " << salary << endl;
//     }
// };

// class Customer : public Person
// {
// private:
//     int balance;

// public:
//     Customer(string name, string address, int balance) : Person(name, address)
//     {
//         this->balance = balance;
//     }

//     void display()
//     {
//         cout << "Customer name: " << Person::getName() << endl;
//         cout << "Customer address: " << Person::getAddress() << endl;
//         cout << "Customer balance: " << balance << endl;
//     }
// };

// int main()
// {
//     Person *person1 = new Employee("Trung", "HN", 3300);
//     Person *person2 = new Customer("Linh", "BN", 10400);
//     person1->display();
//     person2->display();
//     return 0;
// }

//shape example

// #include <iostream>

// using namespace std;

// class Shape
// {
// public:
//     virtual double getArea() = 0;
//     virtual double getPerimeter() = 0;
// };

// class Rectangle : public Shape
// {
// private:
//     double length;
//     double width;

// public:
//     Rectangle(double length, double width)
//     {
//         this->length = length;
//         this->width = width;
//     }

//     double getArea()
//     {
//         return length * width;
//     }

//     double getPerimeter()
//     {
//         return (length + width) * 2;
//     }
// };

// class Circle : public Shape
// {
// private:
//     double radius;

// public:
//     Circle(double radius)
//     {
//         this->radius = radius;
//     }

//     double getArea()
//     {
//         return 3.14 * radius * radius;
//     }

//     double getPerimeter()
//     {
//         return 2 * 3.14 * radius;
//     }
// };

// int main()
// {
//     Shape **shapes = new Shape *[3];
//     shapes[0] = new Rectangle(3.4, 5.3);
//     shapes[1] = new Circle(5.5);
//     shapes[2] = new Rectangle(7.4, 4.3);
//     for (int i = 0; i < 3; i++)
//     {
//         cout << "Area of shapes[" << i << "]: " << shapes[i]->getArea() << endl;
//         cout << "Perimeter of shapes[" << i << "]: " << shapes[i]->getPerimeter() << endl;
//     }
//     return 0;
// }

//employee example

#include <iostream>

using namespace std;

class Employee
{
private:
    string name;
    int paymentPerHour;

public:
    Employee(string name, int paymentPerHour)
    {
        this->name = name;
        this->paymentPerHour = paymentPerHour;
    }

    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    int getPaymentPerHour()
    {
        return paymentPerHour;
    }

    void setPaymentPerHour(int paymentPerHour)
    {
        this->paymentPerHour = paymentPerHour;
    }

    virtual int calculateSalary() = 0;
};

class PartTimeEmployee : public Employee
{
private:
    int workingHours;

public:
    PartTimeEmployee(string name, int paymentPerHour, int workingHours) : Employee(name, paymentPerHour)
    {
        this->workingHours = workingHours;
    }

public:
    int calculateSalary()
    {
        return workingHours * getPaymentPerHour();
    }
};

class FullTimeEmployee : public Employee
{
public:
    FullTimeEmployee(string name, int paymentPerHour) : Employee(name, paymentPerHour)
    {
    }

public:
    int calculateSalary()
    {
        return 8 * getPaymentPerHour();
    }
};

int main()
{
    Employee *employee1 = new PartTimeEmployee("Trung", 45000, 7);
    cout << "Name: " << employee1->getName() << endl;
    cout << "Salary per day: " << employee1->calculateSalary() << endl;

    Employee *employee2 = new FullTimeEmployee("Linh", 65000);
    cout << "Name: " << employee2->getName() << endl;
    cout << "Salary per day: " << employee2->calculateSalary() << endl;
    return 0;
}