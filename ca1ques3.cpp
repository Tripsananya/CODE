#include <iostream>
using namespace std;
int main()
{
    cout << "------------------------------------------------------------------------------------------------------" << endl;
    cout << "The 1st 100 odd numbers are : " << endl;
    int number = 0;
    for (int i = 1; i > 0; i++)
    {
        if (i % 2 == 0)
        {
            continue;
        }
        number++;
        if (number <= 100)
        {
            cout << i << ", ";
        }
        else
        {
            return 0;
        }
    }
    return 0;
}