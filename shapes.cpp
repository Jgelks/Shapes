#include <iostream>
#include <cassert>
using namespace std;
//2
class Shape {
    public:
    virtual void getArea() = 0;
    virtual void getPerimeter() = 0;
};

class Circle : public Shape {
    void getArea() {
        
    }
    void getPerimeter() {
        
    }
};

class Rectangle : public Shape {
  void getArea() {
      
  }  
  void getPerimeter() {
      
  }
};

class RightTriangle : public Shape {
  void getArea() {
      
  }  
  void getPerimeter() {
      
  }
};


int main() {
    
    return 0;
}