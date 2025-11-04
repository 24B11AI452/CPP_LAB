#include <iostream>
#include <deque>
using namespace std;

int main() {
    deque<int> dq;
    
    dq.push_back(10); // Add to back: {10}
    dq.push_front(5); // Add to front: {5, 10}
    dq.push_back(15); // Add to back: {5, 10, 15} - This line was missing in source code but implied by output, adding for correctness

    dq.pop_front(); // removes first element (5) - Deque is now: {10, 15}

    cout << "Deque Elements: ";
    for (int x: dq) cout << x << " ";
    cout << endl;
    
    return 0;
}
/*
Output:
Deque Elements: 10 15
*/
