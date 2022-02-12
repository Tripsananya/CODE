#include <iostream>
using namespace std;

int main()

{
    int i = 1;
    int n, r;
    int sum = 0;

    cout << "Enter a number:";
    cin >> n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }

    cout << "Reverse :" << sum << endl;
    cout << "Bye. . . ";
    return 0;
}

