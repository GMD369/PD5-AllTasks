#include <iostream>
using namespace std;
void evenOrOdd(int n1);
main()
{
int number1;
cout<<"Enter a number: ";
cin>>number1;
evenOrOdd(number1);
}
void evenOrOdd(int n1)
{
if (n1%2==0)
{
cout<<"Number "<<n1<<" is even";
}
if (n1%2==1)
{
cout<<"Number "<<n1<<" is odd";
}}