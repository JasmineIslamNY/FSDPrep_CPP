// Chapter 2 Problem 3

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/*Main method
 *Opens the cpp file and counts the words
 *Displays the word count
 *param: none
 *return: 0
 *throw: none
 */
int main() {
    ifstream f("./twoThree.cpp");
    int nwords = 0;
    string word;
    
    while (f >> word)
        ++nwords;
    
    cout << "Number of words = " << nwords << endl;
    return 0;
}
