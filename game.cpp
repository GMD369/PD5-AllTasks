#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x,int y);
void printEnemy();
void printMaze();
void eraseEnemy();
void moveEnemy();
void printPlayer();
void erasePlayer();
void movePlayerLeft();
void movePlayerRight();
void movP();
char getCharAtxy(short int x, short int y);
int eX=20,eY=2;
int pX=24,pY=24;
main()
{
  system("cls");  
  printMaze();
  printEnemy();
  printPlayer();
  while(true)
  {
    if (GetAsyncKeyState(VK_LEFT))
    {
        movePlayerLeft();
    }
    if (GetAsyncKeyState(VK_RIGHT))
    {
        movePlayerRight();
    }
    moveEnemy();
    
    Sleep(200);
  }
}
void movP()
{
    erasePlayer();
    pY=pY-1;
    if(pY == 10)
    {
        pY=0;
    }
}
void moveEnemy()
{
    eraseEnemy();
    eX=eX+1;
    if (eX == 50)
    {
        eX=2;
    }
    printEnemy();
}
void eraseEnemy()
{
    gotoxy(eX,eY);
    cout<<"        ";
    gotoxy(eX,eY+1);
    cout<<"        ";
    gotoxy(eX,eY+2);
    cout<<"        ";
    gotoxy(eX,eY+3);
    cout<<"        ";
    gotoxy(eX,eY+4);
    cout<<"        ";
    gotoxy(eX,eY+5);
    cout<<"        ";
    gotoxy(eX,eY+6);
    cout<<"        ";
}
void printEnemy()
{
    gotoxy(eX,eY);
    cout<<"-------";
    gotoxy(eX,eY+1);
    cout<<"|     |";
    gotoxy(eX,eY+2);
    cout<<"(     )";
    gotoxy(eX,eY+3);
    cout<<"\\     /";
    gotoxy(eX,eY+4);
    cout<<" -----";
    gotoxy(eX,eY+5);
    cout<<" (   )  ";
    gotoxy(eX,eY+6);
    cout<<"  ---  ";





}
void printMaze()
{
    cout<<"################################################################"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"#                                                              #"<<endl;
    cout<<"################################################################"<<endl;
}
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printPlayer()
{
   gotoxy(pX,pY);
   cout<<"      /\\        ";
   gotoxy(pX,pY+1);
   cout<<"     ____        ";
   gotoxy(pX,pY+2);
   cout<<"    |    |       ";
   gotoxy(pX,pY+3);  
   cout<<"    (    )       ";
   gotoxy(pX,pY+4);
   cout<<"     ~  ~        ";
   gotoxy(pX,pY+5);
   cout<<"      --         " ;
     
}
void erasePlayer()
{
    gotoxy(pX,pY);
    cout<<"                    ";
    gotoxy(pX,pY+1);
    cout<<"                    ";
    gotoxy(pX,pY+2);
    cout<<"                    ";
    gotoxy(pX,pY+3);
    cout<<"                    ";
    gotoxy(pX,pY+4);
    cout<<"                    ";
    gotoxy(pX,pY+5);
    cout<<"                    ";
}
void movePlayerLeft()
{
    if (getCharAtxy(pX-1,pY)== ' ')
    {
    erasePlayer();
    pX=pX-2;
    printPlayer;
    }
}
void movePlayerRight()
{
    if (getCharAtxy(pX+26,pY)== ' ')
    {
    erasePlayer();
    pX=pX+2;
    printPlayer();
    }
}
char getCharAtxy(short int x, short int y)
{
CHAR_INFO ci;
COORD xy = {0, 0};
SMALL_RECT rect = {x, y, x, y};
COORD coordBufSize;
coordBufSize.X = 1;
coordBufSize.Y = 1;
return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar
: ' ';
}


