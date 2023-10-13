
#include<iostream>

using namespace std;

int main()
{
    int mark;
    cout << "Enter Mark: ";
    cin >> mark;
    if((mark>=80)&&(mark<=100))
    {
        cout << "Letter Grade: A+" << endl;
        cout << "Grade Point: 4.00" << endl;
    }
    else if((mark>=75)&&(mark<=79))
    {
        cout << "Letter Grade: A" << endl;
        cout << "Grade Point: 3.75" << endl;
    }
    else if((mark>=70)&&(mark<=74))
    {
        cout << "Letter Grade: A-" << endl;
        cout << "Grade Point: 3.50" << endl;
    }
    else if((mark>=65)&&(mark<=69))
    {
        cout << "Letter Grade: B+" << endl;
        cout << "Grade Point: 3.25" << endl;
    }
    else if((mark>=60)&&(mark<=64))
    {
        cout << "Letter Grade: B" << endl;
        cout << "Grade Point: 3.00" << endl;
    }
    else if((mark>=55)&&(mark<=59))
    {
        cout << "Letter Grade: B-" << endl;
        cout << "Grade Point: 2.75" << endl;
    }
    else if((mark>=50)&&(mark<=54))
    {
        cout << "Letter Grade: C+" << endl;
        cout << "Grade Point: 2.50" << endl;
    }
    else if((mark>=45)&&(mark<=49))
    {
        cout << "Letter Grade: C" << endl;
        cout << "Grade Point: 2.25" << endl;
    }
    else if((mark>=40)&&(mark<=44))
    {
        cout << "Letter Grade: D" << endl;
        cout << "Grade Point: 2.00" << endl;
    }
    else if((mark>=0)&&(mark<=39))
    {
        cout << "Letter Grade: F" << endl;
        cout << "Grade Point: 0.00" << endl;
    }
    else
    {
        cout << "Enter number Between 0-100!!!" << endl;
    }
}
