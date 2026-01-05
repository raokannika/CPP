#include <iostream>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    // UNORDERED SET (Unique + No order)
    unordered_set<int> us;

    us.insert(5);
    us.insert(15);
    us.insert(5);   // duplicate (ignored)
    us.emplace(25);

    cout << "Unordered set elements: ";
    for (int x : us) {
        cout << x << " ";
    }
    cout << endl;

    // find()
    if (us.find(15) != us.end()) {
        cout << "15 found in unordered_set" << endl;
    }

    // erase()
    us.erase(15);

    // size & empty
    cout << "Size of unordered_set: " << us.size() << endl;
    cout << "Is unordered_set empty? " << us.empty() << endl;

    return 0;
}