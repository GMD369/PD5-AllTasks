#include <iostream>
using namespace std;
main()
{
float imp,player,chance;
cout<<"Enter Imposter Count: ";
cin>>imp;
cout<<"Enter Player Count: ";
cin>>player;
chance=(imp/player)*100;
cout<<"Chance of being an imposter: "<<chance<<"%";
}