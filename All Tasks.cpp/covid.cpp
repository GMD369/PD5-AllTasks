#include <iostream>
using namespace std;
void tpChecker(int n1,int n2);
main()
{
int people,roll;
cout<<"Number of people in the household: ";
cin>>people;
cout<<"Number of rolls of TP: ";
cin>>roll;
tpChecker(people,roll);
}
void tpChecker(int n1,int n2)
{
int sheetsperRoll=500;
int sheetsperDay=57;
int total=n1*sheetsperDay*14;
int totalsheetsAvailable=n2*sheetsperRoll;
if (total>totalsheetsAvailable)
{
cout<<"Your TP will only last "<<totalsheetsAvailable/(n1*sheetsperDay)<<" days, buy more!"<<endl;
}
if (total<totalsheetsAvailable)
{
cout<<"Your TP will last "<<totalsheetsAvailable/(n1*sheetsperDay)<<" days, no need to panic!";
}
}
