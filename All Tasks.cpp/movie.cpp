#include <iostream>
using namespace std;
main()
{
string name;
float adult,child,adultTickets,childTickets,donation,total,charity,remain;
cout<<"Enter the movie name: ";
cin>>name;
cout<<"Enter the adult ticket price: $";
cin>>adult;
cout<<"Enter the child ticket price: $";
cin>>child;
cout<<"Enter the number of adult tickets sold: ";
cin>>adultTickets;
cout<<"Enter the number of child tickets sold: ";
cin>>childTickets;
cout<<"Enter the percentage of the amount to be donated to charity: ";
cin>>donation;
cout<<endl<<"Movie: "<<name<<endl;
total=(adult*adultTickets)+(child*childTickets);
charity=(donation/100)*total;
remain=total-charity;
cout<<"Total amount generated from ticket sales: $"<<total<<endl;
cout<<"Donation to charity (10%): $"<<charity<<endl;
cout<<"Remaining amount after donation: $"<<remain;
}

