#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
/* 全局变量 */
extern int step;  // 步数
extern int score; // 分数
extern long int Time;
extern int BOX[4][4];

/*
 *  判断是否胜利
*/

int Gamewin()
{
    int flag = 0;
    if(Boxmax() == 2048){
        system("cls");
        // 打印胜利的图像,暗绿色
        color(2);
        gotoxy(1, 6);
        printf("  ■        ■         ■     ■ ■ ■ ■ ■     ■       ■\n");
        gotoxy(1, 7);
        printf("   ■      ■ ■       ■          ■         ■  ■    ■\n");
        gotoxy(1, 8);
        printf("    ■    ■   ■     ■           ■         ■   ■   ■\n");
        gotoxy(1, 9);
        printf("     ■  ■    ■    ■            ■         ■    ■  ■\n");
        gotoxy(1, 10);
        printf("      ■        ■           ■ ■ ■ ■ ■     ■     ■ ■\n");
        gotoxy(35, 17);
        color(13);
        printf("胜利啦~你真棒！\n");
        flag = 1;
    }

    return flag;
}
