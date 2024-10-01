#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int,int);
void name(int, int);
main()
{
system("cls");
int x= 20, y=15;
gotoxy(x,y);
name(x,y);
gotoxy(0,30);
}
void gotoxy(int x,int y)
{
COORD coordinates;
coordinates.X = x;
coordinates.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void name(int x,int y)
{
	cout<< "########        ##     ##         #####        ############       #######       ###       ###      ########     "<<endl;
	gotoxy(x,y+1);
	cout<< "##     ##       ##     ##       ##     ##           ##          ##            ##   ##   ##   ##     ##     ##   "<<endl;
	gotoxy(x,y+2);
	cout<< "##     #        ##     ##       ##                  ##         ##             ##   ##   ##   ##     ##     #    "<<endl;
	gotoxy(x,y+3);
	cout<< "#######         ##     ##      ########             ##         ##             #######   #######     #######     "<<endl;
	gotoxy(x,y+4);
	cout<< "##     ##       ##     ##      #      ##            ##         ##    # ###    ##   ##   ##   ##     ##     ##   "<<endl;
	gotoxy(x,y+5);
	cout<< "##     #####    #########       ######              ##           ########     ##   ##   ##   ##     ##     #####"<<endl;
	
}