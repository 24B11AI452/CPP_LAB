#include <iostream>
#include <string> // Need to include string for string type
using namespace std;

class Book {
private:
    string title;
    int pages;

public:
    // Parameterized constructor
    Book(string t, int p) {
        title = t;
        pages = p;
    }

    // Copy constructor
    Book(const Book &b) {
        title = b.title;
        pages = b.pages;
    }

    void display() {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

int main() {
    Book b1("C++ Programming", 350); // Normal constructor
    Book b2 = b1; // Copy constructor

    cout << "Original Book: ";
    b1.display();
    
    cout << "Copied Book: ";
    b2.display();
    
    return 0;
}
/*
Output:
Original Book: Title: C++ Programming, Pages: 350
Copied Book: Title: C++ Programming, Pages: 350
*/
