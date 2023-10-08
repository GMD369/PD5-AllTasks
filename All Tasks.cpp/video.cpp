#include <iostream>
using namespace std;
main()
{
int minutes,frames,total;
cout<<"Number of Minutes: ";
cin>>minutes;
cout<<"Frames per Second: ";
cin>>frames;
total=minutes*60*frames;
cout<<"Total Number of Frames: "<<total;
}
