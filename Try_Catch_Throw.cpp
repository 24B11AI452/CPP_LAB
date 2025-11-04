#include <iostream>
#include <string> // Need for string exceptions in next program, good practice.
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    try { // Block of risky code
        if (b == 0)
            throw "Division by Zero Error!"; // Throw exception
        
        cout << "Result: " << (a / b) << endl;
    }
    catch (const char* msg) { // Catch block for const char* (string literal)
        cout << "Exception Caught: " << msg << endl;
    }

    return 0;
}
/*
Input:
Enter two numbers: 10 0
Output:
Exception Caught: Division by Zero Error!
*/
