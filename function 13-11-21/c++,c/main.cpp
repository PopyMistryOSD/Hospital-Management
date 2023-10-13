#include <iostream>
#include <conio.h>
using namespace std;
string p_name,problem, address, date;
int age;

class hospital
{

    string p_name,problem, address, date;
    int age;
    long int number;
public:
    void patient_appoint();
    void doctor_list();
    void payment();
    void hospital_details();

};
class doctor: public hospital
{
public:
    void one();
    void two();
    void three();
    void four();
    void five();
    void six();
    void seven();
    void eight();

};
void doctor::one()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tokay, Thank You. We calling you for confirmed Appoint after sometime!"<<endl;
}
void doctor::two()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tokay, Thank You. We calling you for confirmed Appoint after sometime!"<<endl;
}

void doctor::three()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tokay, Thank You. We calling you for confirmed Appoint after sometime!"<<endl;
}

void doctor::four()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tokay, Thank You. We calling you for confirmed Appoint after sometime!"<<endl;
}
void doctor::five()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tokay, Thank You. We calling you for confirmed Appoint after sometime!"<<endl;
}
void doctor::six()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tokay, Thank You. We calling you for confirmed Appoint after sometime!"<<endl;
}
void doctor::seven()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tokay, Thank You. We calling you for confirmed Appoint after sometime!"<<endl;
}

void doctor::eight()
{
    patient_appoint();
    cout<<endl;
    cout<<"\t\t\tokay, Thank You. We calling you for confirmed Appoint after sometime!"<<endl;
}
 void hospital : patient_appoint()

{
    cout<<"\t\t\t\t\t\tpatient Name: ";
    cin.ignore();
    getline(cin,p_name);
    cout<<"\t\t\t\t\t\tPatient Age: ";
    cin>>age();

    cout<<"\t\t\t\t\t\tPatient Problem: ";
    cin.ignore();
    getline(cin,problem);
    cout<<"\t\t\t\t\t\tAddress: ";
    cin.ignore();
    getline(cin, address);
    cout<<"\t\t\t\t\t\tEnter Your Mobile Number: ";
    cin>>number;
    cout<<"\t\t\t\t\t\tAppoint Date: ";
    cin.ignore();
    getline(cin,date);
    cout<<"\n\t\t\t\t\t\tPatient Successfully Booked!"<<endl<<endl;

}















