#include <iostream>
using namespace std;
void sum(int n1,int n2);
void mul(int n1,int n2);
void sub(int n1,int n2);
void divi(float n1,float n2);
main()
{
int number1,number2;
char op;
cout<<"Enter 1st number: ";
cin>>number1;
cout<<"Enter 2nd number: ";
cin>>number2;
cout<<"Enter an operator (+, -, *, /): ";
cin>>op;
if (op=='+')
{
sum(number1,number2);
}
if (op=='-')
{
sub(number1,number2);
}
if (op=='*')
{
mul(number1,number2);
}
if (op=='/')
{
divi(number1,number2);
}
}
void sum(int n1,int n2)
{
int sum;
sum=n1+n2;
cout<<"Addition: "<<sum;
}
void sub(int n1,int n2)
{
int sub;
sub=n1-n2;
cout<<"Subtraction: "<<sub;
}
void mul(int n1,int n2)
{
int mult;
mult=n1*n2;
cout<<"Multiplication: "<<mult;
}
void divi(float n1,float n2)
{
float divi;
divi=n1/n2;
cout<<"Division: "<<divi;
}

