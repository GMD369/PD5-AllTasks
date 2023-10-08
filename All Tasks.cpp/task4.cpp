#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float dis,angle,x;
    cout<<"Enter the distance from the base of the tree (in feet): ";
    cin>>dis;
    cout<<"Enter the angle of elevation (in degrees): ";
    cin>>angle;
    x=angle/57.2958;
    float height=dis*tan(x);
    cout<<"The height of the tree is: "<<height<<" feet";
}