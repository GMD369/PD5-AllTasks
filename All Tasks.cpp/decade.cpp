#include <iostream>
using namespace std;
main(){
int population,birth_rate,population_in_three_decades;
cout<<"Enter the current world population: ";
cin>>population;
cout<<"Enter the monthly birth rate (number of births per month): ";
cin>>birth_rate;
population_in_three_decades=(birth_rate*12*30)+population;
cout<<"The population in three decades will be: "<<population_in_three_decades;
}