/*Map
    A map is an associative container that stores elements in the form of key–value pairs, 
    where keys are unique and stored in sorted order.
        Implemented using Red-Black Tree
        Keys are unique
        Automatically sorted based on keys

Multimap
    A multimap is similar to map but allows duplicate keys.

        Keys can repeat
        Sorted order
        Used when multiple values share the same key

Unordered Map
    An unordered_map stores key–value pairs using hashing, and elements are not stored in sorted order.

        Faster access
        No ordering
        Keys are unique
Map- Unique keys,Sorted order,Slower than unordered_map

Multimap-Duplicate keys allowed,Sorted order,No direct access using []

Unordered Map-Unique keys,No sorting
*/
#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {

    // MAP
    map<int, string> mp;

    // Insert elements
    mp[1] = "Apple";
    mp[2] = "Banana";
    mp[3] = "Mango";

    cout << "Map elements (Sorted):" << endl;
    for (auto p : mp) {
        cout << p.first << " -> " << p.second << endl;
    }

    // MULTIMAP
    multimap<int, string> mmp;

    mmp.insert({1, "Red"});
    mmp.insert({1, "Blue"});
    mmp.insert({2, "Green"});

    cout << "\nMultimap elements (Duplicate keys allowed):" << endl;
    for (auto p : mmp) {
        cout << p.first << " -> " << p.second << endl;
    }

    // UNORDERED MAP
    unordered_map<int, string> ump;

    ump[101] = "C++";
    ump[102] = "Java";
    ump[103] = "Python";

    cout << "\nUnordered Map elements:" << endl;
    for (auto p : ump) {
        cout << p.first << " -> " << p.second << endl;
    }

    return 0;
}
