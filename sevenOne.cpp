/** Chapter 7 Problem 1
 *Create a Text class that contains a string object to hold the text of a file. 
 * Give it two constructors: a default constructor and a constructor that takes a string argument that is the name of the file to open. 
 * When the second constructor is used, open the file and read the contents into the string member object. 
 * Add a member function contents( ) to return the string so (for example) it can be printed. 
 * In main( ), open a file using Text and print the contents.
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Text {
    string text;
public:
    Text() {}
    Text(const string& fname) {
        ifstream ifs(fname.c_str());
        string line;
        while (getline(ifs, line))
            text += line + '\n';
    }
    /*method: contents
     *param: none
     *return: content of string variable "text"
     *throw: none
     */
    string contents() {
        return text;
    }
};

/*Main method creates an instance of the Text Class with no arguments
 * and another with an argument that contains the name of the file specified in the command line
 * it then prints the contents of the string variable "text" for both instances of the Text class
 *param: command line arguments - for filename
 *return: 0
 *throw: none
 */

int main(int argc, char* argv[]) {
    if (argc > 1)
    {
        Text t1;
        Text t2(argv[1]);
        cout << "t1 :\n" << t1.contents() << endl;
        cout << "t2 :\n" << t2.contents() << endl;
    }
}
