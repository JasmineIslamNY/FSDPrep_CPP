/** Chapter 7 Problem 4 (After Change Version)
 *Create a class that contains four member functions, with 0, 1, 2, and 3 int arguments, respectively.
 * Create a main( ) that makes an object of your class and calls each of the member functions.
 * Now modify the class so it has instead a single member function with all the arguments defaulted.
 *
 * Does this change your main( )?
 * ANSWER: the main does not change but the output of main does change in the initial version only the specified arguments were printed but in the After version it prints 0s for the arguments that are not specified.
 */

#include <iostream>
using namespace std;

class FourFunctions {
public:
    /*method: f - takes three int arguments, all of which default to 0
     *param: int, int, int (all with default of 0)
     *return: none
     *throw: none
     */
    void f(int i = 0, int j = 0, int k = 0) {
        cout << "{" << i << ", " << j << ", " << k << "}\n";
    }
};

/*Main method creates an object of the class and calls each of the member functions.
 *param: none
 *return: 0
 *throw: none
 */
int main() {
    FourFunctions a;
    a.f();
    a.f(1);
    a.f(1, 2);
    a.f(1, 2, 3);
}
