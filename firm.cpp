#include <iostream>
#include<string>
using namespace std;
string projectTimeCalculation(int neededhours,int daysAvailable,int numworkers);
main()
{
    int hour,day,worker,n;
    cout<<"Enter the needed hours: ";
    cin>>hour;
    cout<<"Enter the days that the firm has: ";
    cin>>day;
    cout<<"Enter the number of all workers: ";
    cin>>worker;
    cout<<projectTimeCalculation(hour,day,worker);   
}
 string projectTimeCalculation(int neededHours, int daysAvailable, int numWorkers)
 { 
   int n=daysAvailable*numWorkers*10;
   n=n-(n*0.1);
   if (n >= neededHours)
   {
    int rem=n-neededHours;
    return "Yes! "+to_string(rem)+ "hours left.";
   } 
   if (neededHours>n)
   {
    int need=neededHours-n;
    return "Not enough time! "+to_string(need)+" hours needed.";
   }
}
 