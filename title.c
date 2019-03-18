/*
*   绘制标题:2048
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

/* 全局变量 */
extern int step;  // 步数
extern int score; // 分数
extern long int Time;
extern int BOX[4][4];

void title()
{
    color(11);  // 浅绿色
    gotoxy(19, 2); // 第一行第一个位置的值
    printf("■■■    ■■■■    ■   ■      ■■■■");
    gotoxy(19, 3);
    printf("    ■    ■    ■    ■   ■      ■    ■ ");
    gotoxy(19, 4);
    printf("■■■    ■    ■    ■   ■      ■■■■");
    gotoxy(19, 5);
    printf("■        ■    ■    ■■■■     ■    ■");
    gotoxy(19, 6);
    printf("■■■    ■■■■         ■      ■■■■");
}
