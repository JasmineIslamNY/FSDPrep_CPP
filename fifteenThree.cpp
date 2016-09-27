/** Chapter 15 Problem 3
 *Expanding on Exercise 2, create a function that takes a Shape object by value and try to upcast a derived object in as an argument. 
 *See what happens. Fix the function by taking a reference to the Shape object.
 *WHAT HAPPENS: Parameter type 'Shape' is an abstract class
 */

#include <iostream>
#include <array>
using namespace std;

class Shape {
public:
    Shape() {}
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

//void drawFunction(Shape s) {  //Parameter type 'Shape' is an abstract class
 void drawFunction(Shape& s) {
    cout << "Called drawFunction()" << endl;
    s.draw();
}

int main() {
    Triangle tr;
    drawFunction(tr);
}
