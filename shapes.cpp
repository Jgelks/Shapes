#include <iostream>
#include <cassert>
#include <cmath>
using namespace std;

class Shape {
    public:
    virtual double getArea() = 0;
    virtual double getPerimeter() = 0;
};

class Circle : public Shape {
    public:
    Circle(double radius) {
        this->radius = radius;
    }
    Circle() {
        this->radius = 0;
    }
    void setRadius(double radius) {
        this->radius = radius;
    }
    double getArea() {
        double Area = 3.14 * ((this->radius)*(this->radius));
        return Area;
    }
    double getPerimeter() {
        double Perimeter = 2 * 3.14 * (this->radius);
       return Perimeter;
    }
    private:
    double radius;
};

class Rectangle : public Shape {
  public: 
  double getArea() {
      
  }  
  double getPerimeter() {
      
  }
  private: 
    double length;
    double width;
};

class RightTriangle : public Shape {
  public:
  RightTriangle(double base, double height){
    this->base = base;
    this-> height = height;
  }
  double getArea() {
      double area;
      area = (base * height)/2;
  }  
  double getPerimeter() {
      double perimeter;
      perimeter = base + height + (sqrt((base*base) + (height*height)));
      cout << base;
  }
  private:
  double base;
  double height;
};


int main() {
    RightTriangle triangle(3,2);
    triangle.getPerimeter();
    assert(triangle.getArea() == 3);
    return 0;
}