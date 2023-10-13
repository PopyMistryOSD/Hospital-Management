#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double mark;
    cin >> mark;
    string grade[8] = {"A+", "A", "A-", "B", "C"};

    double point[8] = {4.00, 3.75, 3.50, 3.00, 2.00};

    int g = 0;
    for (int i = 80; i >= 40; i -= 10)
    {
        if (mark > 100 || mark < 0)
        {
            cout << "Invalid Mark" << endl;
            break;
        }
        if (mark <= 40 && mark >= 33)
        {
            cout << "Grade D" << endl;
            cout << "Point 1.00" << endl;
            break;
        }
        if (mark < 33 && mark >= 0)
        {
            cout << "Grade F" << endl;
            cout << "Point 0.00" << endl;
            break;
        }
        if (mark <= 100 && mark >= 90)
        {
            cout << "Grade A+" << endl;
            cout << "Point 4.00" << endl;
            break;
        }
        if (mark >= i && mark <= i + 9)
        {
            cout << showpoint;
            cout << "Grade " << setprecision(3) << grade[g] << endl;
            cout << "Point " << setprecision(3) << point[g] << endl;
            break;
        }
        g++;
    }
}
