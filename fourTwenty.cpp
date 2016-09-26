/** Chapter 4 Problem 20
 *How big is a structure? Write a piece of code that prints the size of various structures. Create structures that have data
 * members only and ones that have data members and function members. Then create a structure that has no members at all.
 * Print out the sizes of all these. Explain the reason for the result of the structure with no data members at all.
 * REASON: The standard requires all structs to have non-zero size, even if they have no members.
 */

#include <iostream>

struct DataOnly {
    int x;
};

struct DataFunc {
    int x;
    void setX(int);
    int getX();
};

struct NoMembers {
};

/*Main method prints size of the three different structs (DataOnly, Both, Nothing)
 *param: none
 *return: 0
 *throw: none
 */
int main() {
    using namespace std;
    cout <<"Size of Data Only: " << sizeof(DataOnly) << endl;
    cout <<"Size of Data and Functions: " << sizeof(DataFunc) << endl;
    cout <<"Size of No Members: " << sizeof(NoMembers) << endl;
}
