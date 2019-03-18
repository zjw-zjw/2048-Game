/*
* 设置文字颜色
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

// c 为颜色值
int color(int c)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
    return 0;
}
