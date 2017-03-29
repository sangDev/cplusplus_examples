/*
 *  Interface Class (Abstract Class) Example Code
 */
#include <iostream>

using namespace std;

// Base class
class Shape {

public:
    // pure virtual function providing interface framework.
    virtual int getArea() = 0;

    void setWidth (int w) {
        width = w;
    }

    void setHeight (int h) {
        height = h;
    }

protected:
    int width;
    int height;

};


// Derived Class
class Rectangle: public Shape {
public:
    int getArea(){
        return (width * height);
    }
};

class Triangle: public Shape {
public:
    int getArea() {
        return (width * height)/2;
    }
};


int main() {
    Rectangle Rect;
    Triangle Tri;

    Rect.setHeight(7);
    Rect.setWidth(5);
    cout << "Total Rectangle Area: " << Rect.getArea() << endl;

    Tri.setHeight(5);
    Tri.setWidth(7);
    cout << "Total Triangle Area: " << Tri.getArea() << endl;

    std::cout << "Hello, World!" << std::endl;
    return 0;
}