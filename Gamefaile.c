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
*   判断是否失败
*/

int Gamefaile()
{
    int flag = 0;
    int max;
    if( ifup() + ifdown() + ifleft() + ifright() == 0){
        system("cls");
        color(14);
        gotoxy(34, 3);
        printf("合并出的最大数是: ");
        color(11);
        gotoxy(52, 3);
        max = Boxmax();
        printf("%d",  max);

        // 打印失败界面
        gotoxy(19, 6);
        color(4);  // 暗红色
        printf("    ■ ■ ■ ■ ■       ■        ■       ■ ■       \n");
        gotoxy(19, 7);
        printf("    ■               ■ ■      ■       ■   ■      \n");
        gotoxy(19, 8);
        printf("    ■               ■  ■     ■       ■    ■     \n");
        gotoxy(19, 9);
        printf("    ■               ■   ■    ■       ■     ■     \n");
        gotoxy(19, 10);
        printf("    ■ ■ ■ ■         ■    ■   ■       ■     ■     \n");
        gotoxy(19, 11);
        printf("    ■               ■     ■  ■       ■    ■     \n");
        gotoxy(19, 12);
        printf("    ■               ■      ■ ■       ■   ■     \n");
        gotoxy(19, 13);
        printf("    ■ ■ ■ ■ ■       ■        ■       ■  ■     \n");
        gotoxy(34, 17);
        color(13);
        printf("无法移动，游戏失败！");
        flag = 1;
    }
    return flag;
}
