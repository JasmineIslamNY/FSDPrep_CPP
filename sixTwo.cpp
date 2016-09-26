/** Chapter 6 Problem 2
 *Add a destructor to Exercise 1 that prints out a message to tell you that it’s been called.
 */

#include <iostream>
using namespace std;

class PrintIt {
public:
    PrintIt() {
        cout << "PrintIt has been created" << endl;
    }
    ~ PrintIt() {
        cout << "PrintIt destructor has been called" << endl;
    }
};

/*Main method creates an instance of the PrintIt class
 *param: none
 *return: 0
 *throw: none
 */
int main() {
    using namespace std;
    PrintIt p1;
}
