#include <iostream>
using namespace std;
int sum(int a, int b);

struct money
{
    char name[20];
    int age = 0, income = 0, tax = 0;
} per;

int main()
{
    cout << "Enter name:";
    cin >> per.name;
    cout << "Enter the age:";
    cin >> per.age;
    cout << "Enter the income:";
    cin >> per.income;
    cout << "Enter the tax:";
    cin >> per.tax;

    cout << "The tax and income:" << sum(per.income, per.tax);
    return 0;
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    return c;
}