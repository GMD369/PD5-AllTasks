#include <iostream>
using namespace std;
main()
{
int digit,num1,num2,num3,num4,sum;
cout<<"Enter a 4-digit number: ";
cin>>digit;
num1=digit%10;
num2=(digit/10)%10;
num3=(digit/100)%10;
num4=(digit/1000)%10;
sum=num1+num2+num3+num4;
cout<<"Sum of the individual digits: "<<sum;
}