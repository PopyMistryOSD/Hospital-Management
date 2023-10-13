#include <iostream>
#include <conio.h>
#include<fstream>
using namespace std;
ofstream data;

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
void hospital::patient_appoint()

{
    cout<<"\t\t\t\t\t\tpatient Name: ";
    cin.ignore();
    getline(cin,p_name);
    cout<<"\t\t\t\t\t\tPatient Age: ";
    cin>>age;

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
void hospital::doctor_list()
{
    cout<<"\t\t\t\t\t\t1. Dr. Abdulla Al Siraj\t*Eye Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t\t2. Dr. Altaf Uddin Khan\t*Heart Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t\t3. Dr. Emdadul Hoque\t*Diabetic Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t\t4. Dr. Mostafa Zia\t*Heart Surgent"<<endl<<endl;
    cout<<"\t\t\t\t\t\t5. Dr. Shorif Uddin\t*Eye Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t\t6. Dr. Sifat Hossain\t*Diabetic Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t\t7. Dr. Korno Mitro\t*Medicine  Specialist"<<endl<<endl;
    cout<<"\t\t\t\t\t\t8. Dr. Abir Mitro Raj\t*Medicine Specialist"<<endl<<endl;
}
void hospital:: payment()
{
    int amount, number;
    cout<<"\t\t\t\t\t\tPatient Name: "<<p_name<<endl<<endl;
    cout<<"\t\t\t\t\t\tpatient Problem: "<<problem<<endl<<endl;
    cout<<"\t\t\t\t\t\tEnter of treatment: ";
    cin>>amount;
    cout<<endl;
    cout<<"\t\t\t\t\t\tEnter Your Mobile Number: ";
    cin>>number;
    cout<<"\t\t\t\t\t\tpayment Successful,Thank You!"<<endl<<endl;
    cout<<"\t\t\t\t\t\t"<<p_name<<endl;
    cout<<"\t\t\t\t\t\t------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t|Patient Name: "<<p_name<<endl;
    cout<<"\t\t\t\t\t\t|payment Amount: "<<amount<<endl;
    cout<<"\t\t\t\t\t\t|Mobile: "<<number<<endl;
    cout<<"\t\t\t\t\t\tThank You: "<<endl;
}
void hospital:: hospital_details()
{
    cout<<"\t\t\tHospital is a plase where the sick and the injured are taten for treatment."<<endl;
    cout<<"\t\t\tThe doctors and nurses are readily available there for admitting and attending"<<endl;
    cout<<"\t\t\ton thir patients.The dedicated teams of doctors and nurses delivers the message"<<endl;
    cout<<"\t\t\tof hope to their patients in the hospitals. All over the word, hospitals are buit"<<endl;
    cout<<"\t\t\to treat and cure thousand of the sick patients.As these hospital,there are very"<<endl;
    cout<<"\t\t\ttwell-equipped facilities and expert doctors. These hospitals are considered the best"<<endl;
    cout<<"\t\t\tplaces for effective treatment.The doctors and rurses do their work with a dedicat:"<<endl;
    cout<<"\t\t\tand maintains the pleasant atmosphere of the hospital so that the patients feel"<<endl;
    cout<<"\t\t\tcomfortable and better"<<endl;

}
int main()
{
    int answer, doc,x;
    hospital obj;
    doctor pat;
    do{
      system("cls");
    cout<<"\n\n\t\t\t\t\t\tHospital Management System"<<endl;
    cout<<"\n\n\t\t\t\t\t\t-------------------"<<endl<<endl;
    cout<<"\t\t\t\t\t\t1.Emargen Seat Booking"<<endl<<endl;
    cout<<"\t\t\t\t\t\t2.Treatment Payment"<<endl<<endl;
    cout<<"\t\t\t\t\t\t3.Doctor List & Appoint"<<endl<<endl;
    cout<<"\t\t\t\t\t\t4.Hospital Details"<<endl<<endl;
    cout<<"\t\t\t\t\t\t5.Exit"<<endl<<endl;
    cout<<"\t\t\t\t\t\tSelect An option from here 1/2/3/4/5: ";
    cin>>answer;
    switch(answer)
    {
        case 1: cout<<"\n\t\t\t\t\t\t1.Patient Appoint"<<endl;
        cout<<"\t\t\t\t\t\t------------------------"<<endl<<endl;
        obj.patient_appoint();
        break;


        case 2: cout<<"\n\t\t\t\t\t\t2.Treatment Payment"<<endl;
        cout<<"\t\t\t\t\t\t------------------------"<<endl<<endl;
        obj.payment();
        break;

        case 3: cout<<"\n\t\t\t\t\t\t3.Doctor List"<<endl;
        cout<<"\t\t\t\t\t\t------------------------"<<endl<<endl;
        obj.doctor_list();
        cout<<"\n\t\t\t\t\t\tSelect A doctor For Appoint: ";
        cin>>doc;
        switch(doc)
        {
            case 1: cout<<"\n\t\t\t\t\t\t1.Dr.Abdullah Al Siraj"<<endl<<endl;
            cout<<"\t\t\t\t\t\t-------------------"<<endl<<endl;
            pat.one();
          break;
          case 2: cout<<"\n\t\t\t\t\t\t2.Dr.Altaf Uddin Khan"<<endl;
            cout<<"\t\t\t\t\t\t-------------------"<<endl<<endl;
            pat.two();
          break;
          case 3: cout<<"\n\t\t\t\t\t\t3.Dr.Emdadul Hoque"<<endl;
            cout<<"\t\t\t\t\t\t-------------------"<<endl<<endl;
            pat.three();
          break;
          case 4: cout<<"\n\t\t\t\t\t\t4.Dr.Mostofa Zia"<<endl;
            cout<<"\t\t\t\t\t\t-------------------"<<endl<<endl;
            pat.four();
          break;
          case 5: cout<<"\n\t\t\t\t\t\t5.Dr.Sifat Uddin"<<endl;
            cout<<"\t\t\t\t\t\t-------------------"<<endl<<endl;
            pat.five();
          break;
          case 6: cout<<"\n\t\t\t\t\t\t6.Dr.Sifat Hossain"<<endl;
            cout<<"\t\t\t\t\t\t-------------------"<<endl<<endl;
            pat.six();
          break;
          case 7: cout<<"\n\t\t\t\t\t\t1.Dr.Korno Mitro"<<endl;
            cout<<"\t\t\t\t\t\t-------------------"<<endl<<endl;
            pat.seven();
          break;
          case 8: cout<<"\n\t\t\t\t\t\t1.Dr.Abir Mitro Raj"<<endl;
            cout<<"\t\t\t\t\t\t-------------------"<<endl<<endl;
            pat.eight();
          break;
          default:
            cout<<"Unknown Select! Try Again,"<<endl<<endl;
}
   cout<<"\n\t\t\t\t\tSelect An Option Again:yes or no => ";
   x=getch();
   if(x=='n'  ||   x==  'n')
    exit(0);


    }

}
while(x== 'y'  || x==  'Y');
getch();
}




















