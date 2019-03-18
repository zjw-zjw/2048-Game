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
 * 合并数字
*/
// 函数返回一个int *类型的值
int *add(int item[])
{
    int i, j = 0;
    int tep[4] = {0};
    int tmp[4] = {0};

    for (i=0; i<4; i++){
        if(item[i] != 0){
            // 如果不等于0，就将item的数字传到tep中
            // 这样做的目的，就是跳过了值为0的位置，即空格的位置
            tep[j++] = item[i];
        }
    }
    // 在tep中，把两个数字相同的格子合并
    for(i=0; i<4; i++){
        if(tep[i] == tep[i+1]){
            tep[i] *= 2; // 翻倍
            tep[i+1] = 0;
            score = score + tep[i];
        }
    }

    // 把tep数组中不为0的数装移到一个空数组tmp中
    j = 0;
    for(i=0; i<4; i++){
        if(tep[i] != 0){
            tmp[j++] = tep[i]; // 把tep数组中不为0的数装移到tmp中
        }
    }

    return (int *)(&tmp);  // 返回数组首地址
}
