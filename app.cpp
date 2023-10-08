#include<iostream>
using namespace std;
void addPatient();
void addDoctor();
void schedule();
 main()
{    
    int choice;
    cout<<"##### HOSPITAL MANAGEMENT APPLICATION #####"<<endl<<endl;
    cout<<"1. Add Patient"<<endl;
    cout<<"2. Add Doctor"<<endl;
    cout<<"3. Schedule Appointment"<<endl<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    if (choice == 1)
    {
    addPatient();
    }
    if (choice == 2)
    {
        addDoctor();
    }
    if (choice == 3)
    {
        schedule();
    }
    

}
void addPatient()
{
    int age,ID;
    string name;
    cout<<endl<<"Enter Patient Name: ";
    cin>>name;
    cout<<"Enter Patient Age: ";
    cin>>age;
    cout<<"Enter Patient ID: ";
    cin>>ID;
    cout<<endl<<"####### PATIENT INFORMATION #######"<<endl;
    cout<<"ID      Name       Age"<<endl;
    cout <<ID<<"       "<<name<<"       "<<age<<endl;
    cout<<"Patient added successfully."<<endl;
}
void addDoctor()
{
    string name,speciality;
    int ID;
    cout<<endl<<"Enter Doctor Name: ";
    cin>>name;
    cout<<"Enter Doctor ID:";
    cin>>ID;
    cout<<"Enter Doctor Speciality: ";
    cin>>speciality;
    cout<<endl<<"###### DOCTOR INFORMATION ######"<<endl;
    cout<<"ID       Name        Speciality"<<endl;
    cout <<ID<<"        "<<name<<"         "<<speciality<<endl; 
    cout<<"Doctor added successfully."<<endl;
}
void schedule()
{
    string date;
    cout<<"Enter Appointment date: ";
    cin>>date;
    cout<<endl<<"##### APPOINTMENT INFORMATION #####"<<endl;
    cout<<"        DATE            "<<endl;
    cout<<"        "<<date<<endl;
    cout<<"Appointment Scheduled successfully."<<endl;
}
