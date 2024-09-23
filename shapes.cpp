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
    public:
    void getArea() {
        
    }
    void getPerimeter() {
        
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