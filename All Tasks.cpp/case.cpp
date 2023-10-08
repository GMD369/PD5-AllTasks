#include <iostream>
using namespace std;
void IsEqual(int n1,int n2);
main()
{
int num1,num2;
cout<<"Enter the first number: ";
cin>>num1;
cout<<"Enter the second number: ";
cin>>num2;
IsEqual(num1,num2);
}
void IsEqual(int n1,int n2)
{
if (n1==n2)
{ cout<<"true";
}
if (n1!=n2)
{
cout<<"false";
}
}