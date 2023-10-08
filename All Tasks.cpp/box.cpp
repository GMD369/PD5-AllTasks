#include <iostream>
using namespace std;
#include <windows.h>
void Box(int width,int height);
void gotoxy(int x,int y);
main()
{
int n1,n2;
cin>>n1;
cin>>n2;
system("cls");
Box(n1,n2);

}
void Box(int width,int height)
{
int i=0,j=0;
while(i<height)

{
cout<<"*";
while(j<width)
{
if(i==0||i==height-1)
{
cout<<"*";

}
else{
cout<<" ";
}
j++;
}
cout<<"*";
cout<<endl;
j=0;
i++; 

}
}
void gotoxy(int x,int y)
{
 COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}