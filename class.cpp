// #include <iostream>
// using namespace std;

// int sum(int a, int b); // proto-type

// int sum(int a, int b) // defination
// {
//     int c;
//     c = a + b;
//     return c;
// }

// int main()
// {
//     int value, value1;

//     cout << "Enter the value 1 :";
//     cin >> value;
//     cout << "Enter the value 2 :";
//     cin >> value1;

//     cout << "The function sum is : " << sum(value, value1) << endl;

//     cout<<sum(value, value1); // function call

//     cout << "\nThe direct sum is :" << value + value1;
// }
//--------------------------------------------------------------------------------------
// #include<iostream>
// using namespace std;

// struct lpu
// {
//     int number;
//     char name[20];

// }bca;

// int main()
// {

// return 0;
//

#include <iostream>
using namespace std;

class lpu
{
private:
    int a, b;

    void output()
    {
        cout<<"private A : "<<a<<endl;
        cout<<"private B : "<<b<<endl;
    }

public:
    int x,y;
    
    int sum(int n,int m)
    {
        a=n;
        b=m;

        int l;
        l=n+m;
        cout<<"Public N ="<<n<<endl;
        cout<<"Public M ="<<m<<endl;
        cout<<"The sum is : "<<l<<endl;
        output();
        return 0;
    }
}bca;

using namespace std;
int main()
{
    int value, value1;
    cout << "Enter the value 1 : ";
    cin >> value;
    cout << "Enter the value 2 : ";
    cin >> value1;

    bca.sum(value,value1);

    return 0;
}