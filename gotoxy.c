#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

/*
*   获取屏幕光标位置
*/
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
