#include <iostream>
using namespace std;

class Grandparent {
public:
    void showGrandparent() {
        cout << "I am Grandparent" << endl;
    }
};

class Parent : public Grandparent { // Parent inherits from Grandparent
public:
    void showParent() {
        cout << "I am Parent" << endl;
    }
};

class Child : public Parent { // Child inherits from Parent
public:
    void showChild() {
        cout << "I am Child" << endl;
    }
};

int main() {
    Child c;
    c.showGrandparent(); // Inherited from Grandparent (via Parent)
    c.showParent(); // Inherited from Parent
    c.showChild(); // Own function
    return 0;
}
/*
Output:
I am Grandparent
I am Parent
I am Child
*/
