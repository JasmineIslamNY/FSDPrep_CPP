/** Chapter 4 Problem 17
*/

#include <iostream>

/*Main method
 *Dynamically create pieces of storage of the following types, using new: int, long, an array of 100 chars, an array of 100 floats. 
 *Print the addresses of these and then free the storage using delete.
 *param: none
 *return: 0
 *throw: none
 */

int main() {
    using namespace std;
    
    int* p_int = new int;
    long* p_long = new long;
    char* p_chars = new char[100];
    float* p_floats = new float[100];
    
    cout << "p_int == " << p_int << endl;
    cout << "p_long == " << p_long << endl;
    cout << "p_chars == " << static_cast<void*>(p_chars) << endl;
    cout << "p_floats == " << p_floats << endl;
    
    delete p_int;
    delete p_long;
    delete [] p_chars;
    delete [] p_floats;
}
