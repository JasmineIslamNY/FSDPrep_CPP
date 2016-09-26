/** Chapter 2 Problem 5
 *Change Fillvector.cpp so it prints the lines backwards from last to first.
 */

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

/*Main method
 *param: none
 *return: none
 *throw: none
 */
int main() {
    vector<string> v;
    ifstream in("./twoFive.cpp");
    string line;
    while(getline(in, line))
        v.push_back(line);
    
    // Print backwards:
    int nlines = (int)v.size();
    for(int i = 0; i < nlines; i++) {
        int lineno = nlines-i-1;
        cout << lineno << ": " << v[lineno] << endl;
    }
}
