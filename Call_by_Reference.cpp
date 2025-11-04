#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside function (after swap): a = " << a << ", b = " << b << endl;
}

int main() {
    int x = 10, y = 20;
    cout << "Before function call: x = " << x << ", y = " << y << endl;

    // Call by reference
    swapNumbers(x, y);
    
    // The variables x and y are actually swapped outside the function too
    cout << "After function call: x = " << x << ", y = " << y << endl;
    return 0;
}
/*
Output (The program output was cut off, but based on the code logic, this is the expected output):
Before function call: x = 10, y = 20
Inside function (after swap): a = 20, b = 10
After function call: x = 20, y = 10
*/
