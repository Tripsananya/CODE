#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    float avg;
    cout<<"Enter three numbers:";
    cin>>a>>b>>c;
    avg= (float) (a+b+c)/3;
    cout<<"The average is:"<<avg;
    return 0;
}