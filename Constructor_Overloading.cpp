#include <iostream>
#include <string> // Need to include string for string type
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    // Default constructor (No arguments)
    Student() {
        rollNo = 0;
        name = "Unknown";
    }
    
    // Constructor with one argument (Roll number)
    Student(int r) {
        rollNo = r;
        name = "Not Provided";
    }
    
    // Constructor with two arguments (Roll number and Name)
    Student(int r, string n) {
        rollNo = r;
        name = n;
    }

    void display() {
        cout << "Roll No: " << rollNo << ", Name: " << name << endl;
    }
};

int main() {
    Student s1; // Calls default constructor
    Student s2(10); // Calls constructor with one argument
    Student s3(20, "Alice"); // Calls constructor with two arguments
    
    s1.display();
    s2.display();
    s3.display();
    
    return 0;
}
/*
Output:
Roll No: 0, Name: Unknown
Roll No: 10, Name: Not Provided
Roll No: 20, Name: Alice
*/
