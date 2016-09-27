/** Chapter 15 Problem 2
 *Modify Exercise 1 so draw( ) is a pure virtual function. 
 * Try creating an object of type Shape. Try to call the pure virtual function inside the constructor and see what happens.
 * Leaving it as a pure virtual, give draw( ) a definition.
 *
 *See What Happens (SWH) is inline
 */

#include <iostream>
#include <array>
using namespace std;

class Shape {
public:
    Shape() {
       // draw(); // (SWH) Call to pure virtual member function 'draw' has undefined behavior; overrides of 'draw' in subclasses are not available in the constructor of 'Shape'
    }
    ~Shape() {}
    virtual void draw() const = 0;
};

void Shape::draw() const {
    cout << "Shape::draw" << endl;
}

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
    //Shape test; // (SWH) Variable type 'Shape' is an abstract class
    Shape* bucketOShapes[] = {new Circle, new Square, new Triangle};
    for (int i = 0; i < (sizeof bucketOShapes / sizeof bucketOShapes[0]); i++) {
        bucketOShapes[i]->draw();
    }
    
}
