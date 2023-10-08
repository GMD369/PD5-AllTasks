#include <iostream>
using namespace std;
main()
{
int n,internalAngle;
cout<<"Enter the number of sides of the polygon: ";
cin>>n;
internalAngle=(n-2)*180;
cout<<"The sum of internal angles of a "<<n<<"-sided polygon is: "<<internalAngle<<" degrees";
}
