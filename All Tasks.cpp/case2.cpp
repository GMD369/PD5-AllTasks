#include <iostream>
using namespace std;
void Reverse(string in);
main()
{
string input;
cout<<"Enter 'true' or 'false': ";
cin>>input;
Reverse(input);
}
void Reverse(string in)
{
if (in=="true")
{
cout<<"false";
}
if (in=="false")
{
cout<<"true";
}
}