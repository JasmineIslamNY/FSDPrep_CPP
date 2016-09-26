/** Chapter 6 Problem 2
 *Add a destructor to Exercise 1 that prints out a message to tell you that it’s been called.
 */

#include <iostream>
using namespace std;

class Announce {
public:
    Announce() {
        cout << "Announce has been created" << endl;
    }
    ~ Announce() {
        cout << "Announce destructor has been called" << endl;
    }
};

int main() {
    using namespace std;
    Announce a1;
}
