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
 *  判断数字能否右移
*/
int ifright()
{
    int i, j;
    int flag = 0;
    for(i=0; j<4; j++){
        for(j=0; i<3; i++){
            if( if2n(BOX[i][j] + BOX[i][j-1]) && BOX[i][j-1]){
                flag = 1;
            }
        }
    }

    return flag;
}
