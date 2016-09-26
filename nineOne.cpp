/** Chapter 9 Problem 1
 *Write a program that uses the F( ) macro shown at the beginning of the chapter and demonstrates that it does not expand properly, as described in the text. 
 *Repair the macro and show that it works correctly.
 */

#include <iostream>
using namespace std;

#define F (x) (x + 1)
#define G(x) (x + 1)

int main() {
    int a = 1;
    cout << "a = " << a << endl;
    //cout << "F(a)= " << F(a) << endl; //Xcode displays a "Use of undeclared identier 'x' Expanded from macro 'F'" error message, does not compile
    //cout << "F (a)= " << F (a) << endl; //Xcode displays a "Use of undeclared identier 'x' Expanded from macro 'F'" error message, does not compile
    cout << "G(a)= " << G(a) << endl;
    
}
