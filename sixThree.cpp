/** Chapter 6 Problem 3
 *Modify Exercise 2 so that the class contains an int member. Modify the constructor so that it takes an int argument that 
 * it stores in the class member. Both the constructor and destructor should print out the int value as part of their 
 * message, so you can see the objects as they are created and destroyed.
 */

#include <iostream>
using namespace std;

class PrintIt {
    int x;
public:
    PrintIt(int x) {
        this->x = x;
        cout << "PrintIt has been created with an int of: " << x << endl;
    }
    ~ PrintIt() {
        cout << "PrintIt destructor has been called with an int of: " << x << endl;
    }
};

/*Main method creates an instance of the PrintIt class with an int argument
 *then creates a second one to show the order of creation and destruction and confirm multiple ints are handled
 *param: none
 *return: 0
 *throw: none
 */
int main() {
    using namespace std;
    PrintIt p1(5);
    PrintIt p2(-23);
}
