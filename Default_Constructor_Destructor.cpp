#include <iostream>
using namespace std;

class Demo {
public:
    // Default constructor
    Demo() {
        cout << "Default Constructor Called!" << endl;
    }
    
    // Destructor
    ~Demo() {
        cout << "Destructor Called!" << endl;
    }
};

int main() {
    Demo obj; // Constructor will be called automatically
    cout << "Inside main function" << endl;
    return 0; // Destructor will be called automatically
}
/*
Output:
Default Constructor Called!
Inside main function
Destructor Called!
*/
