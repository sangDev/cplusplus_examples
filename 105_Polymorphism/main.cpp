#include <iostream>

using namespace std;

// Base Class - Shape
class Shape {

    protected:
        int width, height;
    public:
        Shape(int a=0, int b = 0) {
            width = a;
            height = b;
        }

        // virtual creates an abstract function of area
        virtual int area() {
            cout << "Parent class area: " << endl;
             return 0;
        }

};

// Rectangle class inherited from Base Shape class
class Rectangle: public Shape {
    public:
        // Constructor
        Rectangle( int a=0, int b=0):Shape(a,b){ }
        int area() {
            cout << "Rectangle class area: " << endl;
            return (width * height);
        }
};

// Triangle class inherited from Base Shape Class
class Triangle: public Shape {
    public:
        Triangle (int a = 0, int b =0 ):Shape(a,b) {  }
        int area () {
            cout << "Triangle class area: " << endl;
            return (width * height /2 );
        }

};


int main() {
    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);

    // store the address of Rectangle
    shape = &rec;

    // call rectangle area
    shape->area();

    // store the address of Triangle
    shape = &tri;

    // call triangle area
    shape-> area();

    std::cout << "Hello, World!" << std::endl;
    return 0;
}