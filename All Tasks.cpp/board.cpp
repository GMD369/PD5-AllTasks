#include <iostream>
using namespace std;
void possibleBonus(int a,int b);
main()
{
int n1,n2;
cout<<"Enter your position: ";
cin>>n1;
cout<<"Enter your friend's position: ";
cin>>n2;
possibleBonus(n1,n2);
}
void possibleBonus(int a,int b)
{
int diff=b-a;
if (diff<=6)
{
cout<<"true";
}
if (diff>6)
{
cout<<"false";
}
}