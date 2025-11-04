#include <iostream>
#include <string> // Need to include string for string type
using namespace std;

// Class template
template <class T>
class Box {
private:
    T value;

public:
    void setValue(T v) { value = v; }
    T getValue() { return value; }
};

int main() {
    Box<int> intBox; // Box class with T = int
    Box<string> strBox; // Box class with T = string

    intBox.setValue(100);
    strBox.setValue("Hello Templates");

    cout << "Integer Value: " << intBox.getValue() << endl;
    cout << "String Value: " << strBox.getValue() << endl;
    
    return 0;
}
/*
Output:
Integer Value: 100
String Value: Hello Templates
*/
