#include <iostream>
using namespace std;

void tele_cost(int f_call, int f_min);

void tele_cost(int f_call, int f_min)
{
    cout << "|   Total Calls :" << f_call << "\t";
    cout << "     Total Minute :" << f_min << "\t\t   |" << endl;
    cout << "|     Total Call Cost :" << f_call * 0.50 << "\t";
    cout << "Total Minute Cost :" << f_min * 0.20 << "\t   |" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "|\t\tAmount to be payed :" << (f_call * 0.50) + (f_min * 0.20) << "\t\t\t   |" << endl;
    cout << "------------------------------------------------------------" << endl;
}

int main()
{
    int call, min;
    cout << "------------------------------------------------------------" << endl;
    cout << "|\t\t\tTELEPHONE BILL" << "\t\t\t   |" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "|\t\t1 call : 0.50 INR.\t\t\t   |\n|\t\t1 min  duration : 0.20 INR " << "\t\t   |" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "|\tEnter the call done : ";
    cin >> call;
    cout << "|\tEnter the Minute talked on call : ";
    cin >> min;
    cout << "------------------------------------------------------------" << endl;

    tele_cost(call, min);

    return 0;
}