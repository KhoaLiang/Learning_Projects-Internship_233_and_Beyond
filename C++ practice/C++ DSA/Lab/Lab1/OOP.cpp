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