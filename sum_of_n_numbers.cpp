#include<iostream>
using namespace std;
int main()
{
int i=1,n;
int sum=0;
cout<<"Enter last number:";
cin>>n;
JUMP:
cout<<i<<endl;
sum = sum + i;
i++;
if(i<=n)
{
goto JUMP;
}
cout<<"Sum="<<sum<<endl;
cout<<"Bye...";
return 0;
}