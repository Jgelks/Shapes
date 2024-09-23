#include <iostream>
#include <cassert>
using namespace std;
class Shape {
    public:
    virtual void getArea() = 0;
    virtual void getPerimeter() = 0;
};

class Circle : public Shape {
    public:
    Circle(int radius) {
        this->radius = radius;
    }
    Circle() {
        this->radius = 0;
    }
    void setRadius(int radius) {
        this->radius = radius;
    }
    void getArea() {
        int Area = 3.14 * ((this->radius)*(this->radius));
        cout << "The area is " << Area << "units squared" << endl;
    }
    void getPerimeter() {
        int Perimeter = 2 * 3.14 * (this->radius);
        cout << "The perimeter is " << Perimeter << "units" << endl;
    }
    private:
    int radius;
};

class Rectangle : public Shape {
  public: 
  void getArea() {
      
  }  
  void getPerimeter() {
      
  }
  private: 
    int length;
    int width;
};

class RightTriangle : public Shape {
  public:
  RightTriangle(int base, int height){
    this->base = base;
    this-> height = height;
  }
  void getArea() {
      
  }  
  void getPerimeter() {
      
  }
  private:
  int base;
  int height;
};


int main() {
    
    return 0;
}