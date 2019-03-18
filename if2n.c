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
 *  判断某个数是否是2的n次方
*/

int if2n(int x)
{
    int flag = 0;
    int n;
    for(n=1; n<=12; n++){
        if(x == pow(2, n)){
            flag = 1;
        }
    }
    return flag;
}
