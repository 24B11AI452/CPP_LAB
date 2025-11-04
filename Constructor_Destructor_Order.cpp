#include <iostream>
using namespace std;

class Base {
public:
    Base() { 
        cout << "Base Constructor Called" << endl;
    }
    
    ~Base() {
        cout << "Base Destructor Called" << endl;
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived Constructor Called" << endl;
    }
    
    ~Derived() {
        cout << "Derived Destructor Called" << endl;
    }
};

class Child : public Derived {
public:
    Child() {
        cout << "Child Constructor Called" << endl;
    }
    
    ~Child() {
        cout << "Child Destructor Called" << endl;
    }
};

int main() {
    cout << "Creating object..." << endl;
    Child obj; // Constructors will be called
    cout << "Object created successfully!" << endl;
    cout << "Exiting main..." << endl;
    return 0; // Destructors will be called automatically
}
/*
Output:
Creating object...
Base Constructor Called
Derived Constructor Called
Child Constructor Called
Object created successfully!
Exiting main...
Child Destructor Called
Derived Destructor Called
Base Destructor Called
*/
