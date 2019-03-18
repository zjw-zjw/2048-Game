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
 * 计算棋盘中的最大值
*/

int Boxmax()
{
    int max = BOX[0][0];
    int i, j;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(BOX[i][j] > max){
                max = BOX[i][j];
            }
        }
    }

    return max;
}
