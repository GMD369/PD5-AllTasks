#include <iostream>
using namespace std;
void result(int n1);
main()
{
int marks;
cout<<"Enter your score: ";
cin>>marks;
result(marks);
}
void result(int n1)
{
if (n1>50)
{
cout<<"Pass";
}
if (n1<=50)
{
cout<<"Fail";
}
}