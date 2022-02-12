#include <iostream>
using namespace std;

struct lpu
{
    char name[20];
    int roll, english, hindi, math;
} student;

int main()
{

    int total_mark;
    float percentage;

    cout << "NAME: ";
    fflush(stdin);
    cin >> student.name;
    cout << "ROLL_NO: ";
    cin >> student.roll;

    cout << "English : ";
    cin >> student.english;
    cout << "Hindi : ";
    cin >> student.hindi;
    cout << "Maths : ";
    cin >> student.math;
    total_mark = student.english + student.hindi + student.math;
    percentage = total_mark / 3.0;

    cout << "\n*RESULT *";
    cout << "\nName: " << student.name << endl;
    cout << "Roll_No: " << student.roll << endl;
    cout << "Total_No: " << total_mark << "\t";
    cout << "Percentage: " << percentage << endl;
    return 0;
}