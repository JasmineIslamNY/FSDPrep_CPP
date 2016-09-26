/** Chapter 11 Problem 3
*Write a program in which you try to:
* (1) Create a reference that is not initialized when it is created. 
* (2) Change a reference to refer to another object after it is initialized. 
* (3) Create a NULL reference.
*/


/*Main method
 *param: none
 *return: 0
 *throw: none
 */
int main() {
    //(1)
    //int& referenceTest; //Declaration of reference variable 'referenceTest' requires an initializer (does not build)
    
    //(2)
    int x = 0;
    int y = 1;
    int& z = x; //this is fine since it's first
    //int& z = y; //Redefinition of 'z' (does not build)
    
    //(3)
    //int& n = 0; //Non-const lvalue reference to type 'int' cannot bind to a temporary of type 'int' (does not build)
    
    
}
