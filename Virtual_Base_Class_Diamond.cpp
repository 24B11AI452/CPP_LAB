#include <iostream>
using namespace std;

class Person {
public:
    void show() {
        cout << "I am a Person" << endl;
    }
};

// Virtual Inheritance
class Student : virtual public Person { 
public:
    void showStudent() {
        cout << "I am a Student" << endl;
    }
};

// Virtual Inheritance
class Employee : virtual public Person { 
public:
    void showEmployee() {
        cout << "I am an Employee" << endl;
    }
};

// WorkingStudent inherits from both Student and Employee
class WorkingStudent : public Student, public Employee { 
public:
    void showWorkingStudent() {
        cout << "I am a Working Student" << endl;
    }
}; 

int main() {
    WorkingStudent ws;

    // Calling show() is now unambiguous (only one Person base sub-object)
    ws.show(); // No ambiguity due to virtual inheritance
    ws.showStudent();
    ws.showEmployee();
    ws.showWorkingStudent();

    return 0;
}
/*
Output:
I am a Person
I am a Student
I am an Employee
I am a Working Student
*/
