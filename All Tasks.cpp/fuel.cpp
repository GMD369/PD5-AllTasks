#include <iostream>
using namespace std;
void calculateFuel(float n);

main()
{
float distance;
cout<<"Enter the distance: ";
cin>>distance;
calculateFuel(distance);
}
void calculateFuel(float n) 
{
float cal;
cal=n*10;
cout<<"Fuel needed: "<<cal;
}