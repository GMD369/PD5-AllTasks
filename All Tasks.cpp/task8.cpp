#include <iostream>
using namespace std;
string OddishOrEvenish(int number);
main()
{
    int num;
    cout<<"Enter a five-digit number: ";
    cin>>num;
    cout<<OddishOrEvenish(num);
}
string OddishOrEvenish(int number)
{
    int sum=0;
    while(number>0)
    {
        sum+=number%10;
        number/=10;
    }
    if (sum%2==0)
    {
        return "Evenish";
    }
    if (sum%2==1)
    {
        return "Oddish";
    }
}
