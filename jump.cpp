#include<iostream>
using namespace std;
int main()
{
int i=1;
JUMP:
cout<<i<<endl;
i++;
if(i<=10)
{
goto JUMP;
}
cout<<"Bye...";
return 0;
}