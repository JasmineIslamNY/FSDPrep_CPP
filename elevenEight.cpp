/** Chapter 11 Problem 8
 *Create a function that takes a char& argument and modifies that argument. In main( ), print out a char variable, call your function for that variable, and print it out again to prove to yourself that it has been changed. How does this affect program readability?
 
*ANSWER: This may be confusing to the caller of the function (and introduce a bug) as they may expect that the variable was passed by value rather than reference (since she sent it as a value)  Proper documentation should alleviate this issue.
 */


#include <iostream>

/*method: changeChar - changes specified char to 'a'
 *param: char&
 *return: none
 *throw: none
 */
void changeChar(char& c) {
    static char letter = 'a';
    c = letter;
}

int main() {
    using namespace std;
    char c = 'z';
    cout << "c before changeChar: " << c << endl;
    changeChar(c);
    cout << "c after changeChar: " << c << endl;
}
