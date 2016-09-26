/** Chapter 7 Problem 4 (Initial Version)
 *Create a class that contains four member functions, with 0, 1, 2, and 3 int arguments, respectively. 
 * Create a main( ) that makes an object of your class and calls each of the member functions. 
 * Now modify the class so it has instead a single member function with all the arguments defaulted. 
 *
 * Does this change your main( )?
 */

#include <iostream>
using namespace std;

class FourFunctions {
public:
    /*method: f - takes no argument and prints it
     *param: none
     *return: none
     *throw: none
     */
    void f() {
        cout << "{}\n";
    }
    /*method: f - takes one argument and prints it
     *param: int
     *return: none
     *throw: none
     */
    void f(int i) {
        cout << "{" << i << "}\n";
    }
    /*method: f - takes two argument and prints them
     *param: int, int
     *return: none
     *throw: none
     */
    void f(int i, int j) {
        cout << "{" << i << ", " << j << "}\n";
    }
    /*method: f - takes three argument and prints them
     *param: int, int, int
     *return: none
     *throw: none
     */
    void f(int i, int j, int k) {
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
