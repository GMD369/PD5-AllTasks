#include <iostream>
using namespace std;
void pet(int holidays);
main()
{
int holiday;
cout<<"Holidays: ";
cin>>holiday;
pet(holiday);
}
void pet(int holidays)
{
int workingDays=365-holidays;
int gameTime=(workingDays*63)+(holidays*127);
int norm=30000;
int difference=norm-gameTime;
int hours=difference/60;
int minutes=difference%60;
if (difference>=0)
{
cout<<"Tom sleeps well"<<endl;
cout<<hours<<" hours and "<<minutes<<" minutes less for play"<<endl;
}
if (difference<0)
{
cout<<"Tom will run away"<<endl;
cout<<abs(hours)<<" hours and "<<abs(minutes)<<" minutes for play";
}
}
