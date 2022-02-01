#include<iostream>
using namespace std;
int main()
{
int i=1,n;
cout<<"Enter last number:";
cin>>n;
JUMP:
cout<<i<<endl;
i++;
if(i<=n)
{
goto JUMP;
}
cout<<"Bye...";
return 0;
}