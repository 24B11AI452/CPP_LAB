#include <iostream>
using namespace std;

class Math {
public:
    // Overload 1: Sum of two integers
    int add(int a, int b) {
        return a + b;
    }
    
    // Overload 2: Sum of two doubles
    double add(double a, double b) {
        return a + b;
    }
    
    // Overload 3: Sum of three integers
    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Math m;
    
    cout << "Sum of 2 integers: " << m.add(5, 10) << endl;
    cout << "Sum of 2 doubles: " << m.add(4.5, 3.2) << endl;
    cout << "Sum of 3 integers: " << m.add(1, 2, 3) << endl;
    
    return 0;
}
/*
Output:
Sum of 2 integers: 15
Sum of 2 doubles: 7.7
Sum of 3 integers: 6
*/
