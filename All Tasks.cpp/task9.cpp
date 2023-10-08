#include <iostream>
using namespace std;
string timeTravel(int currentHour,int currentMinute);
main()
{
    int hour,min;
    cout<<"Enter Hours: ";
    cin>>hour;
    cout<<"Enter Minutes: ";
    cin>>min;
    cout<<timeTravel(hour,min);

}
string timeTravel(int currentHour,int currentMinute)
{
    currentMinute=currentMinute+15;
    currentHour=currentHour+(currentMinute/60);
    currentMinute=currentMinute%60;
    currentHour=currentHour%24;
    return to_string(currentHour)+":"+to_string(currentMinute);
}