#include <iostream>
using namespace std;
main()
{
int veg,fruits;
float vegp,fruitp,total;
cout<<"Enter vegetable price per kilogram (in coins): ";
cin>>vegp;
cout<<"Enter fruit price per kilogram (in coins): ";
cin>>fruitp;
cout<<"Enter total kilograms of vegetables: ";
cin>>veg;
cout<<"Enter total kilograms of fruits: ";
cin>>fruits;
total=((vegp*veg)+(fruits*fruitp))/1.94;
cout<<"Total earnings in Rupees (Rps): "<<total;
}
