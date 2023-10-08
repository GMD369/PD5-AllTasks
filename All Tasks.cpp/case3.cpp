#include<iostream>
using namespace std;
void flowerShop(float redRose,float whiteRose,float tulip);
main()
{
float red,white,tul;
cout<<"Red Rose: ";
cin>>red;
cout<<"White Rose: ";
cin>>white;
cout<<"Tulips: ";
cin>>tul;
flowerShop(red,white,tul);
}
void flowerShop(float redRose,float whiteRose,float tulip)
{
float original; 
original=(redRose*2)+(whiteRose*4.10)+(tulip*2.50);
cout<<"Original Price: $"<<original<<endl;
if (original>200)
{
original=original-(original*0.2);
cout<<"Price after Discount: $"<<original;
}
if (original<=200)
{
cout<<"No discount applied.";
}
}


