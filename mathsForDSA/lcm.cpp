#include <iostream>
using namespace std;
int gcdRecurssion(int a , int b)
{
    if(b == 0)
    {
        return a;
    }
    return gcdRecurssion(b , a%b);
}
int lcm(int a , int b)
{
    int gcd= gcdRecurssion(a,b);
    return (a*b)/gcd;
}

int main()
{
    int a , b;
    cout<< "Enter two numbers : " ;
    cin >> a >>b ;
    cout << "GCD of " << a << " and " << b << gcdRecurssion(a, b) << endl;
    cout<<"Lcm of "<<a<<" and "<<b << " is "<<lcm(a,b)<<endl;
    return 0;
}