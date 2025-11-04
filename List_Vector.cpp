#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
    // Vector
    vector<int> v = {1, 2, 3};
    v.push_back(4); // Insertion at the end
    v.erase(v.begin()); // delete first element

    cout << "Vector Elements: ";
    for (int x: v) cout << x << " "; // Traversal
    cout << endl;

    // List
    list<int> l = {10, 20, 30};
    l.push_front(5); // Insertion at front
    l.push_back(40); // Insertion at back
    l.remove(20); // delete specific element

    cout << "List Elements: ";
    for (int x: l) cout << x << " "; // Traversal
    cout << endl;

    return 0;
}
/*
Output:
Vector Elements: 2 3 4
List Elements: 5 10 30 40
*/
