/*Multiset: A multiset is similar to set but allows duplicate elements and stores them in sorted order.
*/
#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    // MULTISET (Duplicates allowed)
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);
    ms.emplace(20);

    cout << "Multiset elements: ";
    for (int x : ms) {
        cout << x << " ";
    }
    cout << endl;

    // count() in multiset (can be > 1)
    cout << "Count of 10 in multiset: " << ms.count(10) << endl;

    return 0;
}
