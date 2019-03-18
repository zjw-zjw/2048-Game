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
 * 判断能否移动数字,返回1代表可以移动，返回0代表不能移动
*/

int ifMove(int item[])
{
    int i = 0;
    for(i=0; i<3; i++){
        if(item[i] != 0 && item[i] == item[i+1]){
            return 1;
        }
        if(item[i] == 0 && item[i+1] != 0){
            return 1;
        }
    }
    return 0;
}
