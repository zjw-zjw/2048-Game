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
*  游戏规则界面
*/

void regulation()
{
    int i, j;
    system("cls");
    color(13);
    gotoxy(34, 3);
    printf("游戏规则");

    color(2);
    for(i=6; i<=18; i++){
        for(j=15; j<70; j++){
            gotoxy(j, i);
            if(i==6 || i==18){
                printf("=");
            }
            else if(j == 15 || j == 69){
                printf("||");
            }
        }
    }
    color(3);
        gotoxy(18, 7);
        printf("tip1: 玩家可通过 ↑ ↓ ← → 方向键来移动方块");
        color(10);
        gotoxy(18, 9);
        printf("tip2: 按 ESC 退出游戏");
        color(14);
        gotoxy(18, 11);
        printf("tip3: 玩家选择的方向上若有相同的数字则可以合并");
        color(11);
        gotoxy(18, 13);
        printf("tip4: 每移动一步，空位随机出现一个2或4");
        color(14);
        gotoxy(18, 15);
        printf("tip5: 棋盘被数字填满，无法进行有效合并，游戏失败");
        color(5);
        gotoxy(18, 17);
        printf("tip6: 棋盘上出现2048，游戏胜利");
        getch();
        system("cls");
        main();
}
