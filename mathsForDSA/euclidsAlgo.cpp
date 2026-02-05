#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    if(a==0)
    {
        return b;
    }
    return a;
}
// both methons are same but the second one is using recursion and first one is using iteration.
int gcdRecurssion(int a , int b)
{
    if(b == 0)
    {
        return a;
    }
    return gcdRecurssion(b , a%b);
}

int main()
{
    int a , b;
    cout<< "Enter two numbers : " ;
    cin >> a >>b ;
    cout << "GCD of " << a << " and " << b << " is " << gcd(a, b) << endl;
     cout << "GCD of " << a << " and " << b << " using recursion method is " << gcdRecurssion(a, b) << endl;
    return 0;
}