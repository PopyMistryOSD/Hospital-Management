
#include <iostream>

using namespace std;

int main()
{
    string name, firstName, lastName;
    int firstNameLength = 0, lastNameLength = 0;

    cout << "Enter your full name: ";
    getline(cin, name);

    // Method 2
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == ' ')
        {
            firstName = lastName;
            lastName = "";
            firstNameLength = lastNameLength;
            lastNameLength = 0;
        }
        else
        {
            lastName += name[i];
            lastNameLength++;
        }
    }


    cout << "First name: " << firstName << endl;
    cout << "Lastn ame: " << lastName << endl;
    cout << "Length of First Name: " << firstNameLength << endl;
    cout << "Length of Last Name: " << lastNameLength << endl;

    return 0;
}
Mohammad
