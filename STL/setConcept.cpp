/*Set: A set is an associative container that stores unique elements in sorted order.
    Duplicate values are not allowed
    Elements are stored in ascending order

    functions of set:
        insert() → inserts an element
        emplace() → inserts element efficiently
        erase() → removes an element
        size() → returns number of elements
        count() → checks if element exists (returns 0 or 1)
        find() → returns iterator to element if found
        empty() → checks if set is empty
lower_bound(x)
    Returns an iterator pointing to the first element that is ≥ x
upper_bound(x)
    Returns an iterator pointing to the first element that is > x
*/
#include <iostream>
#include <set>
using namespace std;

int main() {

    // Set declaration

    set<int> s;

    // insert and emplace
    s.insert(10);
    s.insert(30);
    s.emplace(20);
    s.emplace(40);

    // duplicate element (will not be added)
    s.insert(20);

    // Display set elements (sorted & unique)
    cout << "Set elements: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // size
    cout << "Size: " << s.size() << endl;

    // count (returns 1 if present, else 0)
    cout << "Count of 20: " << s.count(20) << endl;

    // find
    auto it = s.find(30);
    if (it != s.end()) {
        cout << "30 found in set" << endl;
    } else {
        cout << "30 not found" << endl;
    }

    // lower_bound
    auto lb = s.lower_bound(20);
    if (lb != s.end()) {
        cout << "Lower bound of 20: " << *lb << endl;
    }

    // upper_bound
    auto ub = s.upper_bound(20);
    if (ub != s.end()) {
        cout << "Upper bound of 20: " << *ub << endl;
    }

    // erase
    s.erase(10);

    cout << "After erase, set elements: ";
    for (int x : s) {
        cout << x << " ";
    }
    cout << endl;

    // empty
    cout << "Is set empty? " << s.empty() << endl;

    return 0;
}
