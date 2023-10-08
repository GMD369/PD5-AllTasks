#include <iostream>
using namespace std;
main()
{
float initial,final,time,acc;
cout<<"Enter Initial Velocity (m/s): ";
cin>>initial;
cout<<"Enter Acceleration (m/s^2): ";
cin>>acc;
cout<<"Enter Time (s): ";
cin>>time;
final=(acc*time)+initial;
cout<<"Final Velocity (m/s): "<<final;
}