#include <iostream>
using namespace std;

class Shape {
public:
    void display() {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape { // Circle inherits from Shape
public:
    void area() {
        cout << "Area of circle = πr²" << endl;
    }
};

class Rectangle : public Shape { // Rectangle also inherits from Shape
public:
    void area() {
        cout << "Area of rectangle = l × b" << endl;
    }
};

int main() {
    Circle c;
    Rectangle r;

    c.display(); // Inherited
    c.area(); // Own
    
    r.display(); // Inherited
    r.area(); // Own
    
    return 0;
}
/*
Output:
This is a shape
Area of circle = πr²
This is a shape
Area of rectangle = l × b
*/
