#include <iostream>
using namespace std;

int main()
{
int a;
printf("Enter a no:");
scanf("%d",&a);
(a%2==0)&&cout<<"Even";
(a%2!=0)&&cout<<"Odd";
return 0;
}