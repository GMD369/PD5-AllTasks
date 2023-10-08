#include <iostream>
using namespace std;
void longestTime(int h,int m);
main()
{
int hour,min;
cout<<"Enter the number of hours: ";
cin>>hour;
cout<<"Enter the number of minutes: ";
cin>>min;
longestTime(hour,min);
}
void longestTime(int h,int m)
{int mins=h*60;
if(mins>m)
{
cout<<h;
}
if (m>mins)
{
cout<<m;
}
}