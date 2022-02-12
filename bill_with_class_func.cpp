#include <iostream>
using namespace std;

class telephone
{
private:
    int p_call, p_min;
    float p_total_call, p_total_min, p_bill;
    void display()
    {
        cout << "|    Total Calls : " << p_call << "\t";
        cout << "\tTotal Minute : " << p_min << "\t   |" << endl;
        cout << "|    Total Call Cost : " << p_total_call << "\t";
        cout << "Total Minute Cost : " << p_total_min << "      |" << endl;

        cout << "------------------------------------------------------------" << endl;
        cout << "|    Amount to be payed : " << p_bill << "\t\t\t\t   |" << endl;
        cout << "------------------------------------------------------------" << endl;
    }

public:
    void tele_cost(int f_call, int f_min)
    {
        p_call = f_call;
        p_min = f_min;
        p_total_call = f_call * 0.50;
        p_total_min = f_min * 0.20;
        p_bill = p_total_call + p_total_min;
        display();
    }
} bill;

int main()
{
    int call, min;
    cout << "------------------------------------------------------------" << endl;
    cout << "|\t\t\tTELEPHONE BILL"<< "\t\t\t   |" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "|\t\t1 call : 0.50 INR.\t\t\t   |\n|\t\t1 min  duration : 0.20 INR." << "\t\t   |" << endl;
    cout << "------------------------------------------------------------" << endl;
    cout << "|\tEnter the call made : ";
    cin >> call;
    cout << "|\tEnter the Minute talked on call : ";
    cin >> min;
    cout << "------------------------------------------------------------" << endl;

    bill.tele_cost(call, min);

    return 0;
}