/** Chapter 12 Problem 1
*Create a simple class with an overloaded operator++. 
* Try calling this operator in both pre- and postfix form and see what kind of compiler warning you get.
*
*ERRORS: inline
*/

#include <iostream>
using namespace std;

class Simple {
    int i;
    Simple* This() {return this;}
public:
    Simple(int ii): i(ii) {}
    const Simple& operator++ (Simple& s); //Parameter of overloaded post-increment operator must have type 'int' (not 'Simple &')
    const Simple operator++ (Simple& s, int); //Overloaded 'operator++' must be a unary or binary operator (has 3 parameters)
};

//Prefix; return incremented value
const Simple& operator++ (Simple& s) {
    cout << "++Simple" << endl;
    s.i++; //'i' is a private member of 'Simple'
    return s;
}

//Postfix; return the value before increment
const Simple operator++ (Simple& s, int) {
    cout << "Simple++" << endl;
    Simple before(s.i); //'i' is a private member of 'Simple'
    s.i++;  //'i' is a private member of 'Simple'
    return before;
}

int main() {
    Simple example(1);
    example++;
    ++example;
}
