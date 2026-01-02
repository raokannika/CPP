#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int main() {

    // Simple pair

    pair<int, int> p1 = {10, 20};
    pair<char,float> p3={'a',6.9f};
    // Accessing pair elements
    // first  -> first value
    // second -> second value

    cout << "Pair values: " << p1.first << " " << p1.second << endl;

    // Pair inside a pair
    pair<int, pair<int, int>> p2 = {1, {100, 200}};

    /*Accessing pair inside pair:
        p2.first              -> first value
        p2.second.first       -> inner pair first value
        p2.second.second      -> inner pair second value*/ 
    cout << "Pair inside pair: "
         << p2.first << " "
         << p2.second.first << " "
         << p2.second.second << endl;

    // Vector of pairs

    vector<pair<int, int>> vp;

    // push_back():
    // Creates the pair first, then inserts into vector
    vp.push_back({1, 10});

    // emplace_back():
    // Directly constructs the pair inside vector (faster)
    vp.emplace_back(2, 20);

    // Display vector of pairs
    cout << "Vector of pairs:" << endl;
    for (auto p : vp) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
