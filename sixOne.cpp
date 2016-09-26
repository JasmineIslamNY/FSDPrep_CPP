/** Chapter 6 Problem 1
 *Write a simple class called Simple (named it sixOne) with a constructor that prints something to tell you that it’s been
 * called. In main( ) make an object of your class.
 */

#include <iostream>
using namespace std;

class Announce {
public:
    Announce() {
        cout << "Announce has been created" << endl;
    }
};

int main() {
    using namespace std;
    Announce a1;
}
