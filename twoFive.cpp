/** Chapter 2 Problem 5
 *Change Fillvector.cpp (renamed to twoFive) so it prints the lines backwards from last to first.
 */

#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

/*Main method
 *Open twoFive.cpp and print the lines from last to first
 *param: none
 *return: 0
 *throw: none
 */
int main() {
    vector<string> v;
    ifstream in("./twoFive.cpp");
    string line;
    while(getline(in, line))
        v.push_back(line);
    
    // Print backwards:
    for(int i = (int)v.size(); i > 0; ) {
        --i;
        cout << i << ": " << v[i] << endl;
    }
}
