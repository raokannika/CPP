/*reverse()
Reverses the order of elements in a given range.

sort()
Sorts elements in ascending order by default using comparison operations.

next_permutation()
Transforms the sequence into the next lexicographically greater permutation.

swap()
Exchanges the values of two variables.

min() / max()
Returns the smallest or largest value based on comparison.*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 2, 8, 1, 3};

    // Sorting (Ascending)
    sort(v.begin(), v.end());
    cout << "Sorted (Ascending): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Sorting (Descending)
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted (Descending): ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Reverse
    reverse(v.begin(), v.end());
    cout << "Reversed: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Next Permutation
    next_permutation(v.begin(), v.end());
    cout << "Next Permutation: ";
    for (int x : v) cout << x << " ";
    cout << endl;

    // Swap
    int a = 10, b = 20;
    cout << "Before swap: a=" << a << ", b=" << b << endl;
    swap(a, b);
    cout << "After swap: a=" << a << ", b=" << b << endl;
    
    // Min & Max
    cout << "Min element: " << *min_element(v.begin(), v.end()) << endl;
    cout << "Max element: " << *max_element(v.begin(), v.end()) << endl;


    return 0;
}
