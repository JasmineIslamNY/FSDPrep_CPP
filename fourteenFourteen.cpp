/** Chapter 14 Problem 14
 *Create two classes called Traveler and Pager without default constructors, but with constructors that take an argument of type string, which they simply copy to an internal string variable. 
 * For each class, write the correct copy-constructor and assignment operator. 
 * Now inherit a class BusinessTraveler from Traveler and give it a member object of type Pager. 
 * Write the correct default constructor, a constructor that takes a string argument, a copy-constructor, and an assignment  operator.
 */

#include <iostream>
#include <string>
using namespace std;

class Traveler {
    string strng;
public:
    Traveler(const string& s) : strng(s) {}
    Traveler(const Traveler& t) : strng(t.strng + " Copy") {}
    Traveler& operator=(const Traveler& t) {
        if (this != &t)
            strng = t.strng;
        return *this;
    }
    string getString() const {
        return strng;
    }
};

class Pager {
    string strng;
public:
    Pager(const string& s) : strng(s) {}
    Pager(const Pager& p) : strng(p.strng + " Copy") {}
    Pager& operator=(const Pager& p) {
        if (this != &p)
            strng = p.strng;
        return *this;
    }
    string getString() const {
        return strng;
    }
};

class BusinessTraveler : public Traveler {
    Pager pager;
public:
    BusinessTraveler(const string& t, const string& p) : Traveler(t), pager(p) {}
    BusinessTraveler(const BusinessTraveler& b) : Traveler(b), pager(b.pager) {}
    BusinessTraveler& operator=(const BusinessTraveler& b) {
        if (this != &b) {
            Traveler::operator=(b);
            pager = b.pager;
        }
        return *this;
    }
    string getPagerString() const {
        return pager.getString();
    }
};

int main() {
    BusinessTraveler bt1("Mike Bloomberg", "iPhone");
    cout << bt1.getString() << " - " << bt1.getPagerString() << endl;
    BusinessTraveler bt2("Jasmine Islam", "Android");
    cout << bt2.getString() << " - " << bt2.getPagerString() << endl;
    //test copy constructor
    BusinessTraveler bt3(bt1);
    cout << bt3.getString() << " - " << bt3.getPagerString() << endl;
    //test assignment
    BusinessTraveler bt4 = bt2;
    cout << bt4.getString() << " - " << bt4.getPagerString() << endl;
}
