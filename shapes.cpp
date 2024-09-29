#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

class Shape
{
public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
    virtual string getName() = 0;
};

class Circle : public Shape
{
public:
    Circle(double radius)
    {
        this->radius = radius;
    }
    Circle()
    {
        this->radius = 0;
    }
    string getName() {
        return this->name;
    }
    void setRadius(double radius)
    {
        this->radius = radius;
    }
    double getArea()
    {
        double Area = 3.14 * ((this->radius) * (this->radius));
        return Area;
    }
    double getPerimeter()
    {
        double Perimeter = 2 * 3.14 * (this->radius);
        return Perimeter;
    }

private:
    double radius;
    string name = "Circle";
};

class Rectangle : public Shape
{
public:
    Rectangle(double length, double width)
    {
        this->length = length;
        this->width = width;
    }
    Rectangle()
    {
        this->length = 0;
        this->width = 0;
    }
    string getName() {
        return this->name;
    }
    double getArea()
    {
        double Area = length * width;
        return Area;
    }
    double getPerimeter()
    {
        double Perimeter = (2 * length) + (2 * width);
        return Perimeter;
    }

private:
    double length;
    double width;
    string name = "Rectangle";
};

class Square : public Rectangle
{
public:
    Square(double side)
    {
        this->side = side;
    }
    string getName() {
        return this->name;
    }
    double getArea()
    {
        double Area = side * side;
        return Area;
    }
    double getPerimeter()
    {
        double Perimeter = (4 * side);
        return Perimeter;
    }

private:
    double side;
    string name = "Square";
};

class RightTriangle : public Shape
{
public:
    RightTriangle(double base, double height)
    {
        this->base = base;
        this->height = height;
    }
    RightTriangle()
    {
        this->base = 0;
        this->height = 0;
    }
    string getName() {
        return this->name;
    }
    double getArea()
    {
        double area;
        area = (base * height) / 2;
        return area;
    }
    double getPerimeter()
    {
        double perimeter;
        perimeter = base + height + (sqrt((base * base) + (height * height)));
        return perimeter;
    }

private:
    double base;
    double height;
    string name = "Right Triangle";
};

class IsocelesTriangle : public RightTriangle
{
public:
    IsocelesTriangle(double base)
    {
        this->base = base;
    }
    IsocelesTriangle()
    {
        this->base = 0;

    }
    string getName() {
        return this->name;
    }
    double getArea()
    {
        double area;
        area = (base * 2) / 2;
        return area;
    }
    double getPerimeter()
    {
        double perimeter;
        perimeter = (base * 2) + (sqrt((base * base) * 2));
        return perimeter;
    }

private:
    double base;
    string name = "Isoceles Right Triangle";
};

void printAreaToScreen(Shape *s) {
    cout << "This " << s->getName() << " has an area of " << s->getArea() << " units squared!" << endl;
}


int main()
{
    RightTriangle triangle(3, 2);
    assert(triangle.getPerimeter() > 8.6);
    assert(triangle.getPerimeter() < 8.61);
    assert(triangle.getArea() == 3);
    Rectangle r(3, 2);
    assert(r.getArea() == 6);
    assert(r.getPerimeter() == 10);
    Square s(3);
    assert(s.getArea() == 9);
    assert(s.getPerimeter() == 12);
    Circle c(1);
    assert(c.getArea() == 3.14);
    assert(c.getPerimeter() == 6.28);
    IsocelesTriangle itriangle(2);
    assert(itriangle.getPerimeter() > 6.82);
    assert(itriangle.getPerimeter() < 6.83);
    assert(itriangle.getArea() == 2);
    printAreaToScreen(&r);
    printAreaToScreen(&c);
    printAreaToScreen(&itriangle);
    printAreaToScreen(&triangle);
    cout << "All tests passed succesfully!" << endl;
    return 0;
}