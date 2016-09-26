/** Chapter 6 Problem 3
 *Modify Exercise 2 so that the class contains an int member. Modify the constructor so that it takes an int argument that 
 * it stores in the class member. Both the constructor and destructor should print out the int value as part of their 
 * message, so you can see the objects as they are created and destroyed.
 */

#include <iostream>
using namespace std;

class Announce {
    int x;
public:
    Announce(int y) {
        this->x = y;
        cout << "Announce has been created with an int of: " << x << endl;
    }
    ~ Announce() {
        cout << "Announce destructor has been called with an int of: " << x << endl;
    }
};

int main() {
    using namespace std;
    Announce a1(5);
    Announce b(-23);
}
