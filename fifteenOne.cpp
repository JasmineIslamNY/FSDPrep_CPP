/** Chapter 15 Problem 1
*Create a simple “shape” hierarchy: a base class called Shape and derived classes called Circle, Square, and Triangle. 
* In the base class, make a virtual function called draw( ), and override this in the derived classes. 
* Make an array of pointers to Shape objects that you create on the heap (and thus perform upcasting of the pointers), and call draw( ) through the base-class pointers, to verify the behavior of the virtual function. 
* If your debugger supports it, single-step through the code.
*/

#include <iostream>
#include <array>
using namespace std;

class Shape {
public:
    Shape() {}
    ~Shape() {}
    virtual void draw() const {
        cout << "Shape::draw" << endl;
    }
};

class Circle : public Shape {
public:
    Circle() {}
    ~Circle() {}
    // Override draw function:
    void draw() const {
        cout << "Circle::draw" << endl;
    }
};

class Square : public Shape {
public:
    Square() {}
    ~Square() {}
    // Override draw function:
    void draw() const {
        cout << "Square::draw" << endl;
    }
};

class Triangle : public Shape {
public:
    Triangle() {}
    ~Triangle() {}
    // Override draw function:
    void draw() const {
        cout << "Triangle::draw" << endl;
    }
};


int main() {
    Shape* bucketOShapes[] = {new Circle, new Square, new Triangle};
    for (int i = 0; i < (sizeof bucketOShapes / sizeof bucketOShapes[0]); i++) {
        bucketOShapes[i]->draw();
    }
    
}
