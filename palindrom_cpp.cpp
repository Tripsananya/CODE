#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n, r, t;
    int sum = 0;

    cout << "Enter a number:";
    cin >> n;
    t = n;
    while (n != 0)
    {
        r = n % 10;
        sum = sum * 10 + r;
        n = n / 10;
    }
    if (sum == t)
    {
        cout << "Palindrome...\n";
    }
    else
    {
        cout << "Not palindrome...\n";
    }
    cout << "Bye. . . ";
    return 0;
}
