/** Chapter 6 Problem 1
 *Write a simple class called Simple (named it sixOne) with a constructor that prints something to tell you that it’s been
 * called. In main( ) make an object of your class.
 */

#include <iostream>
using namespace std;

class PrintIt {
public:
    PrintIt() {
        cout << "PrintIt has been created" << endl;
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
