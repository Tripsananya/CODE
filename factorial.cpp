#include <iostream>
using namespace std;

int main()
{
int n ;
int f=1;
cout<<"Enter a number:";
cin>>n;
switch (n)
{
case 7:
f=f*7;
case 6:
f=f*6;
case 5:
f=f*5;
case 4:
f=f*4;
case 3:
f=f*3;
case 2:
f=f*2;
case 1:
case 0:
f=f*1;
cout<<"Factorial = "<<f;
break;
default:
cout<<"Wrong number:";
break;
}
return 0;
}