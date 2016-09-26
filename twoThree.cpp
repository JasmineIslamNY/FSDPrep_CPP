/** Chapter 2 Problem 3
 *Opens the cpp file and counts the words
 *Displays the word count
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*Main method
 *param: none
 *return: none
 *throw: none
 */
int main() {
    ifstream f("./twoThree.cpp");
    int nwords = 0;
    string word;
    
    while (f >> word)
        ++nwords;
    
    cout << "Number of words = " << nwords << endl;
}
