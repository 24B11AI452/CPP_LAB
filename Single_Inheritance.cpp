#include <iostream>
using namespace std;

class Animal {
public:
    void eat() {
        cout << "Animal is eating" << endl;
    }
};

class Dog : public Animal { // Dog inherits from Animal
public:
    void bark() {
        cout << "Dog is barking" << endl;
    }
};

int main() {
    Dog d;
    d.eat(); // inherited function
    d.bark(); // own function
    return 0;
}
/*
Output:
Animal is eating
Dog is barking
*/
