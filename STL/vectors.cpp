#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Different ways to initialize vector
    vector<int> v1;                 // empty vector
    vector<int> v2(5);              // size 5, default values 0
    vector<int> v3(5, 10);           // size 5, all values 10
    vector<int> v4 = {1, 2, 3, 4};   // initializer list

    // push_back & emplace_back
    v1.push_back(10);
    v1.push_back(20);
    v1.emplace_back(30);

    // size & capacity
    cout << "Size: " << v1.size() << endl;
    cout << "Capacity: " << v1.capacity() << endl;

    // Access elements
    cout << "Using [] : " << v1[0] << endl;
    cout << "Using at(): " << v1.at(1) << endl;
    cout << "Front: " << v1.front() << endl;
    cout << "Back: " << v1.back() << endl;

    // insert
    v1.insert(v1.begin() + 1, 15);

    // erase
    v1.erase(v1.begin());

    // pop_back
    v1.pop_back();

    // Display vector
    cout << "Vector elements: ";
    for (int x : v1) {
        cout << x << " ";
    }
    cout << endl;

    // empty() returns true (1) if the vector is empty
    // empty() returns false (0) if the vector is NOT empty
    cout << "Is vector empty? " << v1.empty() << endl;

    // clear
    v1.clear();
    cout << "After clear, size: " << v1.size() << endl;

    return 0;
}