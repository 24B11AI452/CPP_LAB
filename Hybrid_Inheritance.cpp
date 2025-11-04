#include <iostream>
using namespace std;

class Person {
public:
    void showPerson() {
        cout << "I am a Person" << endl;
    }
};

class Employee : public Person { // Single Inheritance
public:
    void showEmployee() {
        cout << "I am an Employee" << endl;
    }
};

class Student {
public:
    void showStudent() {
        cout << "I am a Student" << endl;
    }
};

class WorkingStudent : public Employee, public Student { // Multiple Inheritance
public:
    void showWorkingStudent() {
        cout << "I am a Working Student" << endl;
    }
}; 

int main() {
    WorkingStudent ws;
    
    ws.showPerson(); // from Person via Employee
    ws.showEmployee(); // from Employee
    ws.showStudent(); // from Student
    ws.showWorkingStudent();
    
    return 0;
}
/*
Output:
I am a Person
I am an Employee
I am a Student
I am a Working Student
*/
