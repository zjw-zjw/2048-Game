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
*   绘制游戏棋盘
*/
void drawTheGameBox()
{
    int i, j, k;
    // 黄色边框
    color(14);
    // 打印横边框
    for(j = 2; j <= 22; j=j+5){
        // j表示纵坐标
        gotoxy(15, j);
        for(k = 1; k < 42; k++){
            printf("-");
        }
        printf("\n");
    }

    // 打印竖边框
    // 每一次循环打印一行的5条竖边框
    for(i = 3; i < 7; i++){
        gotoxy(15, i);
        printf("|         |         |         |         |");
    }
    for(i = 8; i < 12; i++){
        gotoxy(15, i);
        printf("|         |         |         |         |");
    }
    for(i = 13; i < 17; i++){
        gotoxy(15, i);
        printf("|         |         |         |         |");
    }
    for(i = 18; i < 22; i++){
        gotoxy(15, i);
        printf("|         |         |         |         |");
    }

    // 打印游戏信息
    // 游戏分数，浅绿色
    color(11);
    gotoxy(16, 1);
    printf("游戏分数: %ld", score);

    // 打印执行步数，粉色
    color(13);
    gotoxy(42, 1);
    printf("执行步数: %d", step);

    // 打印已用时，绿色
    color(10);
    gotoxy(44, 23);
    printf("已用时： %d s", time(NULL)-Time);  // time(NULL)表示1970年开始到现在的时间，单位是秒
                                               // 用time(NULL) 减去我们刚开始进入游戏的时间Time，
                                               // 就可以得出已用时间
}
