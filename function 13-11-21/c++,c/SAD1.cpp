
#include <iostream>

using namespace std;

int main()
{
    string name, firstName, lastName;
    int firstNameLength = 0, lastNameLength = 0;

    cout << "Enter your full name: ";
    getline(cin, name);

    //Noob method
    firstName = name.substr(0, name.find(" "));
    firstNameLength = firstName.length();
    lastName = name.substr(firstNameLength + 1, -1);
    lastNameLength = lastName.length();

    cout << "First name: " << firstName << endl;
    cout << "Lastn ame: " << lastName << endl;
    cout << "Length of First Name: " << firstNameLength << endl;
    cout << "Length of Last Name: " << lastNameLength << endl;

    return 0;
}
