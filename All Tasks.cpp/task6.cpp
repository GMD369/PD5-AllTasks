#include <iostream>
using namespace std;
string checkAlphabetCase(char ch);
main()
{
    char x;
    cout<<"Enter a character (A/a): ";
    cin>>x;
    cout<<checkAlphabetCase(x);
}
string checkAlphabetCase(char ch )
{
    if (ch == 'A')
    {
        string line="You have entered Capital A";
        return line;
    }
    if (ch == 'a')
    {
        string line1="You have entered small a";
        return line1;
    }
}