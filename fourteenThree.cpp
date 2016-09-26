/** Chapter 14 Problem 3
*Create a three-level hierarchy of classes with default constructors, along with destructors, both of which announce themselves to cout. 
* Verify that for an object of the most derived type, all three constructors and destructors are automatically called. 
* Explain the order in which the calls are made.
*
* EXPLANATION: A parent object is always created first as it may have components that the child object needs to construct itself.  
*   In the same vein, when the destructor is called, the child is removed first as it's removal won't affect the parent but the opposite may cause errors
*/

#include <iostream>
using namespace std;


class FirstClass {
public:
    FirstClass() {
        cout << "FirstClass constructed" << endl;
    }
    ~FirstClass() {
        cout << "FirstClass destructor called" << endl;
    }
};

class SecondClass : public FirstClass {
public:
    SecondClass() {
        cout << "SecondClass constructed" << endl;
    }
    ~SecondClass() {
        cout << "SecondClass destructor called" << endl;
    }
};

class ThirdClass : public SecondClass {
public:
    ThirdClass() {
        cout << "ThirdClass constructed" << endl;
    }
    ~ThirdClass() {
        cout << "ThirdClass destructor called" << endl;
    }
};

/*Main method creates an object of the lowest level class in the hierarchy - that class calls the parent/grand-parent.
 *param: none
 *return: 0
 *throw: none
 */
int main() {
    ThirdClass t;
}
