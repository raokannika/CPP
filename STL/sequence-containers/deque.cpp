// A deque (Double Ended Queue) is a sequence container 
// that allows insertion and deletion at both front and back efficiently.
#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Deque initialization
    deque<int> dq;

    // push operations
    dq.push_back(10);
    dq.push_front(5);
    dq.emplace_back(20);
    dq.emplace_front(2);

    // pop operations
    dq.pop_back();
    dq.pop_front();

    // front and back
    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    // insert
    auto it = dq.begin();
    dq.insert(it, 100);

    // erase
    dq.erase(dq.begin());

    // size
    cout << "Size: " << dq.size() << endl;

    // Display deque elements
    cout << "Deque elements: ";
    for (int x : dq) {
        cout << x << " ";
    }
    cout << endl;

    // clear
    dq.clear();
    cout << "Is deque empty? " << dq.empty() << endl;

    return 0;
}
