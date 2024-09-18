//excercise 1
#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

class Point
{
private:
    double x, y;

public:
    Point()
    {
        /*
         * STUDENT ANSWER
         * TODO: set zero x-y coordinate
         */
        this->x = 0;
        this->y = 0;
    }

    Point(double x, double y)
    {
        /*
         * STUDENT ANSWER
         */
        this->x = x;
        this->y = y;
    }

    void setX(double x)
    {
        /*
         * STUDENT ANSWER
         */
        this->x = x;
    }

    void setY(double y)
    {
        /*
         * STUDENT ANSWER
         */
        this->y = y;
    }

    double getX() const
    {
        /*
         * STUDENT ANSWER
         */
        return x;
    }

    double getY() const
    {
        /*
         * STUDENT ANSWER
         */
        return y;
    }

    double distanceToPoint(const Point &pointA) const
    {
        /*
         * STUDENT ANSWER
         * TODO: calculate the distance from this point to point A in the coordinate plane
         */
        return sqrt(pow(pointA.x - this->x, 2) + pow(pointA.y - this->y, 2));
    }
};

class Circle
{
private:
    Point center;
    double radius;

public:
    Circle()
    {
        /*
         * STUDENT ANSWER
         * TODO: set zero center's x-y and radius
         */
        center.setX(0);
        center.setY(0);
        this->radius = 0;
    }

    Circle(Point center, double radius)
    {
        /*
         * STUDENT ANSWER
         */
        this->center = center;
        this->radius = radius;
    }

    Circle(const Circle &circle)
    {
        /*
         * STUDENT ANSWER
         */
        this->center = circle.center;
        this->radius = circle.radius;
    }

    void setCenter(Point point)
    {
        /*
         * STUDENT ANSWER
         */
        this->center = point;
    }

    void setRadius(double radius)
    {
        /*
         * STUDENT ANSWER
         */
        this->radius = radius;
    }

    Point getCenter() const
    {
        /*
         * STUDENT ANSWER
         */
        return center;
    }

    double getRadius() const
    {
        /*
         * STUDENT ANSWER
         */
        return radius;
    }

    void printCircle() const
    {
        printf("Center: {%.2f, %.2f} and Radius %.2f\n", this->center.getX(), this->center.getY(), this->radius);
    }
};
class Character
{
protected:
    int hp;
    int x;
    int y;

public:
    // Constructor: set the values of x and y and hp to 0
    Character();

    // Constructor: set the values of hp, x and y to each parameter
    Character(int hp, int x, int y);

    // Set and get hp
    int getHp();
    void setHp(int hp);

    // Set and get x
    int getX();
    void setX(int x);

    // Set and get y
    int getY();
    void setY(int y);

    // Get Manhattan distance to other character
    int getManhattanDistTo(Character *other);
};

Character::Character()
{
    // STUDENT ANSWER
    this->hp = 0;
    this->x = 0;
    this->y = 0;
}

Character::Character(int hp, int x, int y)
{
    // STUDENT ANSWER
    this->hp = hp;
    this->x = x;
    this->y = y;
}

int Character::getHp()
{
    // STUDENT ANSWER
    return this->hp;
}

void Character::setHp(int hp)
{
    // STUDENT ANSWER
    this->hp = hp;
}

int Character::getX()
{
    // STUDENT ANSWER
    return this->x;
}

void Character::setX(int x)
{
    // STUDENT ANSWER
    this->x = x;
}

int Character::getY()
{
    // STUDENT ANSWER
    return this->y;
}

void Character::setY(int y)
{
    // STUDENT ANSWER
    this->y = y;
}

int Character::getManhattanDistTo(Character *other)
{
    // STUDENT ANSWER
    return abs(other->x - this->x) + abs(other->y - this->y);
}

//excercise 4
// Hoang is a K19 student studying at Bach Khoa University. He plans to write a book management software for the library. In the class design, Hoang has designed the class Book as follows:

// class Book
// {
// private:
//     char *title;
//     char *authors;
//     int publishingYear;

// public:
//     // some method
// } Your task in this exercise is to implement functions marked with /*  * STUDENT ANSWER   */.Note : For exercises in Week 2, we have #include<bits / stdc++.h> and using namespace std;

// For example :

//     Test Result
//         Book book1("Giai tich 1", "Nguyen Dinh Huy", 2000);
// book1.printBook();
// Giai tich 1 Nguyen Dinh Huy 2000 Book book1("Giai tich 1", "Nguyen Dinh Huy", 2000);
// Book book2 = book1;
// book2.printBook();
// Giai tich 1 Nguyen Dinh Huy 2000


// class Book
// {
// private:
//     char *title;
//     char *authors;
//     int publishingYear;

// public:
//     Book()
//     {
//         /*
//          * STUDENT ANSWER
//          * TODO: set zero publishingYear and null pointer
//          */
//         this->title = nullptr;
//         this->authors = nullptr;
//         this->publishingYear = 0;
        
//     }

//     Book(const char *title, const char *authors, int publishingYear)
//     {
//         /*
//          * STUDENT ANSWER
//          */
//         this->title = new char[strlen(title) + 1];
//         strcpy(this->title, title);

//         this->authors = new char[strlen(authors) + 1];
//         strcpy(this->authors, authors);

//         this->publishingYear = publishingYear;
//     }

//     Book(const Book &book)
//     {
//         /*
//          * STUDENT ANSWER
//          * TODO: deep copy constructor
//          */
//         this->title = new char[strlen(book.title) + 1];
//         strcpy(this->title, book.title);

//         this->authors = new char[strlen(book.authors) + 1];
//         strcpy(this->authors, book.authors);

//         this->publishingYear = book.publishingYear;
//     }

//     void setTitle(const char *title)
//     {
//         /*
//          * STUDENT ANSWER
//          */
//         this->title = new char[strlen(title) + 1];
//         strcpy(this->title, book.title);
//     }

//     void setAuthors(const char *authors)
//     {
//         /*
//          * STUDENT ANSWER
//          */
//         this->authors = new char[strlen(authors) + 1];
//         strcpy(this->authors, book.authors);
//     }

//     void setPublishingYear(int publishingYear)
//     {
//         /*
//          * STUDENT ANSWER
//          */
//         this->publishingYear = publishingYear;
//     }

//     char *getTitle() const
//     {
//         /*
//          * STUDENT ANSWER
//          */
//         return title;
//     }

//     char *getAuthors() const
//     {
//         /*
//          * STUDENT ANSWER
//          */
//         return authors;
//     }

//     int getPublishingYear() const
//     {
//         /*
//          * STUDENT ANSWER
//          */
//         return publishingYear;
//     }

//     ~Book()
//     {
//         delete[] title;
//         delete[] authors;
//     }

//     void printBook()
//     {
//         printf("%s\n%s\n%d", this->title, this->authors, this->publishingYear);
//     }
// };
// int main()
// {
//     Book myBook("The Great Gatsby", "F. Scott Fitzgerald", 1925);
//     myBook.printBook(); // Should output: Title: The Great Gatsby, Authors: F. Scott Fitzgerald, Year: 1925

//     Book anotherBook(myBook); // Using the copy constructor
//     anotherBook.printBook();  // Should output the same as myBook

//     return 0;
// }

// excercise 5
#include <iostream>

using namespace std;

enum Color
{
    red,
    green,
    blue
};

enum Size
{
    small,
    medium,
    big
};

class Toy
{
protected:
    double price;

public:
    Toy(double price)
    {
        this->price = price;
    }

    virtual void printType() = 0;
    friend class ToyBox;
};

class CarToy : public Toy
{
private:
    Color color;

public:
    CarToy(double price, Color color) : Toy(price), color(color)
    {
        // Constructor implementation
    }

    void printType()
    {
        cout << "This is a car toy\n";
    }

    friend class ToyBox;
};

class PuzzleToy : public Toy
{
private:
    Size size;

public:
    PuzzleToy(double price, Size size) : Toy(price), size(size)
    {
        // Constructor implementation
    }

    void printType()
    {
        cout << "This is a puzzle toy\n";
    }

    friend class ToyBox;
};

class ToyBox
{
private:
    Toy *toyBox[5];
    int numberOfItems;

public:
    ToyBox()
    {
        // Initialize numberOfItems to 0 and toyBox elements to nullptr
        numberOfItems = 0;
        for (int i = 0; i < 5; i++)
        {
            toyBox[i] = nullptr;
        }
    }

    int addItem(const CarToy &carToy)
    {
        if (numberOfItems >= 5)
        {
            return -1; // Box is full
        }
        toyBox[numberOfItems] = new CarToy(carToy);
        numberOfItems++;
        return numberOfItems;
    }

    int addItem(const PuzzleToy &puzzleToy)
    {
        if (numberOfItems >= 5)
        {
            return -1; // Box is full
        }
        toyBox[numberOfItems] = new PuzzleToy(puzzleToy);
        numberOfItems++;
        return numberOfItems;
    }

    void printBox()
    {
        for (int i = 0; i < numberOfItems; i++)
        {
            toyBox[i]->printType();
        }
    }

    ~ToyBox()
    {
        // Destructor to free allocated memory
        for (int i = 0; i < 5; i++)
        {
            delete toyBox[i];
        }
    }
};

int main()
{
    ToyBox toyBox;
    CarToy carToy1(10.0, red);
    CarToy carToy2(15.0, blue);
    PuzzleToy puzzleToy1(20.0, small);
    PuzzleToy puzzleToy2(25.0, big);

    toyBox.addItem(carToy1);
    toyBox.addItem(carToy2);
    toyBox.addItem(puzzleToy1);
    toyBox.addItem(puzzleToy2);

    toyBox.printBox(); // Should print the types of toys in the box

    return 0;
}