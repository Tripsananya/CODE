#include<iostream>
using namespace std;
int main()
{
int a,b;
int sum;
float avg;
cout<<"Enter 1st no: ";
cin>>a;
cout<<"Enter 2nd no: ";
cin>>b;
sum=a+b;
avg=(float)sum/2;
cout<<"Sum:"<<sum;
cout<<"\nAverage:"<<avg;
return 0;
}