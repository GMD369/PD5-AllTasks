#include <iostream>
using namespace std;
double taxCalculator(char type,double price);
main()
{
    char ch;
    double prices;
    cout<<"Enter the vehicle type code (M, E, S, V, T): ";
    cin>>ch;
    cout<<"Enter the price of the vehicle: $";
    cin>>prices;
    cout<<"The final price of a vehicle of type "<<ch<<" after adding the tax is $"<<taxCalculator(ch,prices)<<".";
}
double taxCalculator(char type,double price)
{
    if (type == 'M')
    {
        price =price+(price*0.06);
        return price;
    }
    if (type == 'E')
    {
        price=price+(price*0.08);
        return price;
    }
    if ( type == 'S')
    {
        price=price+(price*0.1);
        return price;
    }
    if (type == 'V')
{
    price=price+(price*0.12);
    return price;
}
if (type =='T')
{
    price=price+(price*0.15);
    return price;
}

}