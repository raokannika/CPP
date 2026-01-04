/*A list is a sequence container that stores elements in non-contiguous memory and 
allows fast insertion and deletion at any position.

Implemented as a doubly linked list.*/
#include <iostream>
#include <list>
using namespace std;

int main() {
    // List initialization
    list<int> l1;
    list<int> l2 = {10, 20, 30};

    // push & emplace
    l1.push_back(10);
    l1.push_front(5);
    l1.emplace_back(20);
    l1.emplace_front(2);

    // pop
    l1.pop_back();
    l1.pop_front();

    // front & back
    cout << "Front: " << l1.front() << endl;
    cout << "Back: " << l1.back() << endl;

    // insert
    auto it = l1.begin();
    l1.insert(it, 100);

    // erase
    l1.erase(l1.begin());

    // size
    cout << "Size: " << l1.size() << endl;

    // Display list
    cout << "List elements: ";
    for (int x : l1) {
        cout << x << " ";
    }
    cout << endl;

    // clear
    l1.clear();
    cout << "Clear operation is performed" << endl;
    cout << "Is list empty? " << l1.empty() << endl;
    cout << "Size after clear: " << l1.size() << endl;
    return 0;
}