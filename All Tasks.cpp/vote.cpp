#include <iostream>
using namespace std;
void Vote(int n1);
main()
{
int number1;
cout<<"Enter your age: ";
cin>>number1;
Vote(number1);
}
void Vote(int n1)
{
if (n1>=18)
{
cout<<"You are eligible to vote.";
}
if (n1<18)
{
cout<<"You are not eligible to vote.";
}
}