#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

/*
*   ��ȡ��Ļ���λ��
*/
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
