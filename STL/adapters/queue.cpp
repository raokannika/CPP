// follows the first in first out method(FIFO)
#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    // inserting the element using push function
    // can also be inserted as in this metho queue<int> q={2,42,3};
    q.push(2);
    q.push(34);
    cout << "Top element: " << endl;
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    queue<int> q1;
    queue<int> q2;
    q2.push(20);
    q2.push(40);
    cout << "Size of queue q2 before swap: " << q2.size() << endl;
    cout << "Size of queue q1 before swap: " << q1.size() << endl<< endl;

    q1.swap(q2);
    cout << "Swap function called" << endl << endl;
    cout << "Size of queue q2 after swap: " << q2.size()<< endl;
    cout << "Size of queue q1 after swap: " << q1.size() << endl;
}