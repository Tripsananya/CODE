#include<iostream>
using namespace std;
int main()
{
int i=0,n;
cout<<"Enter last number:";
cin>>n;
JUMP:
cout<<i<<endl;
i++;
i++;
if(i<=n)
{
goto JUMP;
}
cout<<"\nBye...";
return 0;
}



