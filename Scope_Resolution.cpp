#include <iostream>
using namespace std;

int x = 100; // Global variable

int main() {
    int x = 50; // Local variable
    
    // Accessing local variable (takes precedence)
    cout << "Local variable x = " << x << endl;
    
    // Accessing global variable using scope resolution operator (::)
    cout << "Global variable x = " << ::x << endl; 
    
    return 0;
}
/*
Output:
Local variable x = 50
Global variable x = 100
*/
