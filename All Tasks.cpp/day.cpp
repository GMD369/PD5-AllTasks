#include <iostream>
using namespace std;
void calculatePayableAmount(string day,float n1);
main()
{
float number1;
string days;
cout<<"Enter the day of purchase: ";
cin>>days;
cout<<"Enter the total purchase amount: $";
cin>>number1;
calculatePayableAmount(days,number1);
}
void calculatePayableAmount(string day,float n1)
{ 
if (day=="Sunday")
{ 
n1=n1-(0.1*n1);
cout<<"Payable Amount: $"<<n1;
}
if (day!="Sunday")
{
cout<<"Payable Amount: $"<<n1;
}
}