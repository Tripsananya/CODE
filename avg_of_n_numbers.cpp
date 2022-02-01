#include<iostream>
using namespace std;
int main()
{
int i=1,n;
int sum=0;
float avg;
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
avg=(float)sum/n;
cout<<"Average = "<<avg<<"\nBye...";
return 0;
}