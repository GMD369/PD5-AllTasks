#include <iostream>
using namespace std;
void inchesToFeet(double n);
main()
{
double inch;
cout<<"Enter the measurement in inches: ";
cin>>inch;
inchesToFeet(inch);
}
void inchesToFeet(double n)
{
double feet;
feet=n/12;
cout<<"Equivalent in feet: "<<feet;
}