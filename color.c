/*
* ����������ɫ
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

// c Ϊ��ɫֵ
int color(int c)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
    return 0;
}
