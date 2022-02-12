#include <iostream>
using namespace std;

struct student
{
    int subject=0,total=0;
    float marks=0, percentage=0,a=0;
} sub;

int main()
{

    cout << "Enter Number of subjects : ";
    cin >> sub.subject;

    cout << "Enter Marks of subjects : ";
    for (int i = 0; i < sub.subject; i++)
    {
        cin >> sub.marks;
        sub.total += sub.marks;
    }
    sub.a=sub.subject*100;
    sub.percentage = float(sub.total / sub.a)*100;

    cout << "Total Marks = " << sub.total << endl;
    cout << "Percentage = " << sub.percentage;
    return 0;
}