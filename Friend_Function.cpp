#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    // Constructor
    Box(int l) {
        length = l;
    }
    
    // Declare friend function
    friend void printLength(Box b); 
};

// Friend function definition
void printLength(Box b) {
    // Can access private member 'b.length'
    cout << "Length of box = " << b.length << endl;
}

int main() {
    Box b1(15);
    printLength(b1); // accessing private data using friend function
    return 0;
}
/*
Output:
Length of box = 15
*/
