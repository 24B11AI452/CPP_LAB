#include <iostream>
using namespace std;

class Teacher {
public:
    void teach() {
        cout << "Teaching students" << endl;
    }
};

class Researcher {
public:
    void research() {
        cout << "Conducting research" << endl;
    }
};

class Professor : public Teacher, public Researcher { // Inherits from two classes
public:
    void guide() {
        cout << "Guiding students" << endl;
    }
};

int main() {
    Professor p;
    p.teach(); // Inherited from Teacher
    p.research(); // Inherited from Researcher
    p.guide(); // Own function
    return 0;
}
/*
Output:
Teaching students
Conducting research
Guiding students
*/
