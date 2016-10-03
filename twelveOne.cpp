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
public:
    Simple(int ii): i(ii) {
        if (i < 2) {
            cout << "Minimum value to start Simple is 2.  Current value automatically set to 2." << endl;
            i = 2;
        }}
    int operator++ () {
        cout << "++Simple" << endl;
        i = i * i;
        return i;
    }
    int operator++ (int) {
        cout << "Simple++" << endl;
        int before = i;
        i = i * i;
        return before;
    }
    void print() {
        cout << "The current value of Simple is " << i << endl;
    }
};


int main() {
    Simple example(7);
    
    cout << "Testing prefix form" << endl;
    cout << "-------------------" << endl;
    example.print();
    int temp = example++;
    cout << "Value returned from overloaded operator: " << temp << endl;
    example.print();
    cout << "\n";
    
    cout << "Testing postfix form" << endl;
    cout << "-------------------" << endl;
    example.print();
    temp = ++example;
    cout << "Value returned from overloaded operator: " << temp << endl;
    example.print();
    cout << "\n";
}
