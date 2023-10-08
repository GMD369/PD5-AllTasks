#include <iostream>
using namespace std;
void pak(string cou,float n1);
void ire(string cou,float n1);
void ind(string cou,float n1);
void eng(string cou,float n1);
void can(string cou,float n1);
main()
{
string coun;
float dollar;
cout<<"Enter the country's name: ";
cin>>coun;
cout<<"Enter the ticket price in dollars: $";
cin>>dollar;
if (coun=="Pakistan")
{
pak(coun,dollar);
}
if (coun=="Ireland")
{
ire(coun,dollar);
}
if (coun=="India")
{
ind(coun,dollar);
}
if (coun=="England")
{
eng(coun,dollar);
}
if (coun=="Canada")
{
can(coun,dollar);
}
}
void pak(string cou,float n1)
{
n1=n1-(n1*0.05);
cout<<"Final ticket price after discount: $"<<n1;
}
void ire(string cou,float n1)
{
n1=n1-(n1*0.1);
cout<<"Final ticket price after discount: $"<<n1;
}
void ind(string cou,float n1)
{
n1=n1-(n1*0.2);
cout<<"Final ticket price after discount: $"<<n1;
}
void eng(string cou,float n1)
{
n1=n1-(n1*0.3);
cout<<"Final ticket price after discount: $"<<n1;
}
void can(string cou,float n1)
{
n1=n1-(n1*0.45);
cout<<"Final ticket price after discount: $"<<n1;
}