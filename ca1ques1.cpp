#include <iostream>
using namespace std;
int main()
{
    int last, first = 2, i = 2;
    cout << "\n* * * * * * * * * * * * * * * *" << endl;
    cout << "  Enter the first number :";
    cin >> first ;
    cout << "  Enter the last number :";
    cin >> last;
    cout << "* * * * * * * * * * * * * * * *" << endl;
    if (first > last)
    {
        last = (first + last) - (first = last);
    }
    while (first < last)
    {
        for (i = 2; i < first; i++)
        {
            if (first % i == 0)
            {
                break;
            }
        }
        if (i == first)
        {
            cout << i << " ";
        }
        first++;
    }

    cout << "\n* * * * * * * * * * * * * * * *" << endl;

    return 0;
}