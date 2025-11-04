#include <iostream>
using namespace std;

// Inline functions
inline int square(int n) {
    return n * n;
}

inline int cube(int n) {
    return n * n * n;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Square of " << num << " = " << square(num) << endl;
    cout << "Cube of " << num << " = " << cube(num) << endl;
    return 0;
}
/*
Output for input '6':
Enter a number: 6
Square of 6 = 36
Cube of 6 = 216
*/
