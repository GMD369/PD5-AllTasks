#include <iostream>
using namespace std;
#include <windows.h>
void gotoxy(int x,int y);
void printMaze();
void MovePlayer(int x,int y);
main()
{
int x=4, y=4;
system("cls");
printMaze();
while(true)
{
MovePlayer(x,y);
x=x+1;
if (x==21)
{
x=4;
}
}
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X= x;
coordinates.Y= y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printMaze()
{
cout<<"##########################################   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"#                                        #   "<<endl;
cout<<"##########################################   "<<endl;
}
void MovePlayer(int x,int y)
{
gotoxy(x,y);
cout<<"P";
Sleep(100);
gotoxy(x, y);
}
