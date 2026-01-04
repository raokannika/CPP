/*
    A priority queue is a special type of queue in which elements are processed based on priority, 
    not on insertion order.

    Highest priority element is always at the top
    Implemented using heap
    Default → Max Heap
    what makes priority queue different from queue
        Normal Queue:
            Follows FIFO (First In First Out)
            Elements removed in insertion order

        Priority Queue
            Follows priority order
            Highest (or lowest) value removed first
            Order depends on priority, not insertion
    Syntax for Priority queue is : priority_queue<int> pq;
    Syntax for Priority Queue(reverse Order) is:priority_queue<int, vector<int>, greater<int>> pq;
*/ 
#include <iostream>
#include <queue>
using namespace std;

int main() {

    // Priority Queue (Max Heap)
    priority_queue<int> pq;

    // push and emplace
    pq.push(10);
    pq.push(30);
    pq.emplace(20);
    // size
    cout << "Size: " << pq.size() << endl;
    // top() - returns highest priority element
    cout << "Top element: " << pq.top() << endl;
    cout << "Priority Queue elements: ";
    while(!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout<<endl;
    // pop
    // pq.pop();

    // cout << "After pop, top: " << pq.top() << endl;


    // Min Heap Priority Queue
    priority_queue<int, vector<int>, greater<int>> pq1;

    pq1.push(50);
    pq1.push(10);
    pq1.push(30);

    cout << "Min heap top: " << pq1.top() << endl;
    cout << "Priority Queue elements: ";
    while(!pq1.empty()) {
        cout << pq1.top() << " ";
        pq1.pop();
    }
    cout<<endl;
    // empty
    cout << "Is priority queue empty? " << pq1.empty() << endl;

    return 0;
}
