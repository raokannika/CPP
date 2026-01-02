//An iterator is an object used to traverse elements of a container like a pointer.
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // Iterator declaration (traditional way)
    vector<int>::iterator it;

    cout << "Using begin() and end(): ";
    for (it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    // Reverse iteration
    cout << "Using rbegin() and rend(): ";
    for (auto rit = v.rbegin(); rit != v.rend(); rit++) {
        cout << *(rit) << " ";
    }
    cout << endl;

    // Using auto with iterator
    cout << "Using auto iterator: ";
    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;

    return 0;
}
