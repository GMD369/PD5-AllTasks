#include <iostream>
using namespace std;
bool IsSymmetrical(int number);
main()
{
    int num;
    cout<<"Enter a three-digit number: ";
    cin>>num;
    if (IsSymmetrical(num))
    {
        cout<<"The number is symmetrical.";
    }
    else
    {
    
        cout<<"The number is not symmetrical.";
    }

}
bool IsSymmetrical(int number)
{
    int orig=number;
    int rev=0;
    while (number>0)
    {
        int digit= number%10;
        rev=(rev*10)+digit;
        number=number/10;
    }
    return orig==rev;
}