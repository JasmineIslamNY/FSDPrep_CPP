/** Chapter 11 Problem 4
 *Write a function that takes a pointer argument, modifies what the pointer points to, and then returns the destination of the pointer as a reference.
 */

#include <iostream>
using namespace std;

/* method: pointerConverter - changes the destination of a pointer to a new specified destination
 *param: pointer, newDestination
 *return: reference to new destination of pointer
 *throw: none
*/

int& pointerConverter (int* pointr, int& newDestination){
    cout << "Print pointr before change: " << *pointr << endl;
    pointr = &newDestination;
    cout << "Print pointr after change: " << *pointr << endl;
    
    return *pointr;
}


int main() {
    int x = 1;
    int y = 10;
    int& result = pointerConverter(&x, y);
    cout << "Printing result of function: " << result << endl;
    
}
