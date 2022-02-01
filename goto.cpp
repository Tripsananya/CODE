#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter a no:";
cin>>a;
if(a<0)
{
cout<<"A is -ve....";
goto skip;
}
cout<<"A is +ve....";
skip:
return 0;
}