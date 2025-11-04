#include <iostream>
using namespace std;

class Shape {
public:
    // Virtual function
    virtual void draw() { 
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override { // Function overriding
        cout << "Drawing a Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle" << endl;
    }
};

int main() {
    Shape *ptr; // Base class pointer
    Circle c;
    Rectangle r;

    // Base pointer pointing to Circle
    ptr = &c;
    ptr->draw(); // Calls Circle's draw() (runtime polymorphism)

    // Base pointer pointing to Rectangle
    ptr = &r;
    ptr->draw(); // Calls Rectangle's draw() (runtime polymorphism)
    
    return 0;
}
/*
Output:
Drawing a Circle
Drawing a Rectangle
*/
