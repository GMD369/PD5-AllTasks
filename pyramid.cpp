#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string pyramidVolume(float l,float w,float h,string unit);
main()
{
    float length,width,height;
    string units;
    cout<<"Enter the length of the pyramid (in meters): ";
    cin>>length;
    cout<<"Enter the width of the pyramid (in meters): ";
    cin>>width;
    cout<<"Enter the height of the pyramid (in meters) ";
    cin>>height;
    cout<<"Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
    cin>>units;
    cout<< pyramidVolume(length,width,height,units);
}
string pyramidVolume(float l,float w,float h,string unit)
{
    if (unit == "meters")
    {
        float volume=(l*w*h)/3;
        string vol= to_string(volume);
        return "The volume of the pyramid is: "+vol+" cubic meters";
    }
    if (unit == "milimeters")
    {
        float volume=((l*w*h)/3)/pow(10,-3);
        string vol=to_string(volume);
        return "The volume of the pyramid is: "+vol+" cubic milimeters";
    }
    if (unit == "centimeters")
    {
        float volume=((l*w*h)/3)/pow(10,-2);
        string vol=to_string(volume);
        return "The volume of the pyramid is: "+vol+" cubic centimeters";
    }
    if (unit == "kilometers")
    {
        float volume=((l*w*h)/3)/pow(10,3);
        string vol=to_string(volume);
        return "The volume of the pyramid is: "+vol+" cubic kilometers";
    }
}
