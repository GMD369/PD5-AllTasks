#include <iostream>
using namespace std;
void howManyStickers(int n);
main()
{
int number;
cout<<"Enter the side length of the Rubik's Cube: ";
cin>>number;
howManyStickers(number);
}
void howManyStickers(int n)
{
int stick;
stick=(n*n)*6;
cout<<"Number of stickers needed: "<<stick;
}