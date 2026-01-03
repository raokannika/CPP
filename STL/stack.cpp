#include<iostream>
#include<stack>
using namespace std;
int main() { 
    //creating a stack of integers
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(23);

    //usage of top() function is to get the element that is there in the top of the stack
    cout<<"Top element of the stack: "<<s.top()<<endl;
    cout<<endl;
    cout<<"Top element: "<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    //understanding usage of swap() function
    stack<int> s2;
    stack<int> s3;

    s2.push(20);
    s2.push(40);
    cout<<"Size of stack s2 before swap: "<<s2.size()<<endl;
    cout<<"Size of stack s3 before swap: "<<s3.size()<<endl<<endl;

    s3.swap(s2);
    cout<<"Swap function called"<<endl<<endl;
    cout<<"Size of stack s2 after swap: "<<s2.size()<<endl;
    cout<<"Size of stack s3 after swap: "<<s3.size()<<endl;

    return 0;
}