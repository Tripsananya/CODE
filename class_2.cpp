#include <iostream>
using namespace std;

class lpu
{
    public:
    char name[20];
    int age = 0, income = 0, tax = 0;
    int sum(int a, int b)
    {
        int c;
        c = a + b;
        return c;
    }
};

int main()
{
    lpu bca;
    cout << "Enter name:";
    cin >> bca.name;
    cout << "Enter the age:";
    cin >> bca.age;
    cout << "Enter the income:";
    cin >> bca.income;
    cout << "Enter the tax:";
    cin >> bca.tax;

    cout << "The tax and income:" << bca.sum(bca.income, bca.tax);
    return 0;
}
