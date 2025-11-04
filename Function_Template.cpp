#include <iostream>
using namespace std;

// Function template
template <class T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // T is deduced as int
    cout << "Sum of Integers: " << add(10, 20) << endl;
    
    // T is deduced as double
    cout << "Sum of Doubles: " << add(3.5, 2.7) << endl;
    
    // T is deduced as char/int for the result ('A' + 2 = 'C')
    cout << "Sum of Characters: " << add('A', (char)2) << endl; // 'A' + 2
    
    return 0;
}
/*
Output:
Sum of Integers: 30
Sum of Doubles: 6.2
Sum of Characters: C
*/
