#include <vector>
#include <iostream>
using namespace std;
int countPrimes(int n)
{
    int count = 0;
    vector<bool> isPrime(n + 1, true);
    cout <<"Prime Numbers are: "<<endl;
    for (int i = 2; i < n; i++)
    {
        if (isPrime[i])
        {
            count++;
            for (int j = i * 2; j < n; j = j + i)
            {
                isPrime[j] = false;
            }
            cout << i << " ";
        }
    }
    return count;
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout<< endl;
    cout << "Count of primes less than " << n << " is " << countPrimes(n) << endl;
    return 0;
}
