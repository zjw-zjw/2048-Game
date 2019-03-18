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
    重新开始游戏
*/

void Replay()
{
    system("cls");
    // 清空步数和分数
    score = 0;
    step = 0;
    // 清空BOX数组(置0)
    memset(BOX, 0, 16*sizeof(int));

    // 重新调用游戏
    Gameplay();

}
