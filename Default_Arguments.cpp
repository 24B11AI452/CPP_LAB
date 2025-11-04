#include <iostream>
using namespace std;

int power(int base, int exp = 2) { // default exponent is 2
    int result = 1;
    // The loop iterates 'exp' times to multiply 'base' by itself
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int main() {
    // Calls power(5, 2) - uses default value 2 for exp
    cout << "5 raised to 2 (default) = " << power(5) << endl;
    
    // Calls power(5, 3) - explicitly passes both arguments
    cout << "5 raised to 3 = " << power(5, 3) << endl;
    
    return 0;
}
/*
Output:
5 raised to 2 (default) = 25
5 raised to 3 = 125
*/
