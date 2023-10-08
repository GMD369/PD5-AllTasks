#include <iostream>
using namespace std;
main(){
int wins,draws,losses,points;
string name;
cout<<"Enter the name of the cricket team: ";
cin>>name;
cout<<"Enter the number of wins: ";
cin>>wins;
cout<<"Enter the number of draws: ";
cin>>draws;
cout<<"Enter the number of losses: ";
cin>>losses;
points=(wins*3)+(draws*1)+(losses*0);
cout<<name<<" has obtained "<<points<<" points in the Asia Cup tournament.";
}