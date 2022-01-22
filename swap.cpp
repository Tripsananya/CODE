#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    a=22;
    b=33;
    cout<<"Actual value of a and b are "<<a<<" and "<<b;
    c=a;
    a=b;
    b=c;
    cout<<"\nAfter swapping value of a and b are "<<a<<" and "<<b;
    return 0;
}