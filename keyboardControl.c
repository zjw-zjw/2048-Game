#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

/* 全局变量 */
extern int step;  // 步数
extern int score; // 分数
extern long int Time;
extern int BOX[4][4];

// 键盘控制移动
int keyboardControl(int key)
{
    int i, j = 0;
    int *p;  // 指针p接收合并后的数组
    int tp[4] = {0}; // 起中间变量的作用
    switch(key){
        case 72:  // 向上键
            for(i=0; i<4; i++){
                // 把一列的数字转移到tp数组中暂时存放
                tp[0] = BOX[0][i];
                tp[1] = BOX[1][i];
                tp[2] = BOX[2][i];
                tp[3] = BOX[3][i];
                p = add(tp);
                if( !ifMove(tp)){ // 若不能移动，j+1
                    j++;
                }
                BOX[0][i] = p[0];
                BOX[1][i] = p[1];
                BOX[2][i] = p[2];
                BOX[3][i] = p[3];
            }
            return j != 4;
        case 80: // 向下键
            j = 0;
            for(i=0; i<4; i++){
                tp[0] = BOX[3][i];
                tp[1] = BOX[2][i];
                tp[2] = BOX[1][i];
                tp[3] = BOX[0][i];
                p = add(tp);
                if( !ifMove(tp)){ // 若不能移动，j+1
                    j++;
                }
                BOX[3][i] = p[0];
                BOX[2][i] = p[1];
                BOX[1][i] = p[2];
                BOX[0][i] = p[3];
            }
            return j != 4;
        case 77:  // 向右按键
            j = 0;
            for(i=0; i<4; i++){
                tp[0] = BOX[i][3];
                tp[1] = BOX[i][2];
                tp[2] = BOX[i][1];
                tp[3] = BOX[i][0];
                p = add(tp);
                if( !ifMove(tp)){ // 若不能移动，j+1
                    j++;
                }
                BOX[i][3] = p[0];
                BOX[i][2] = p[1];
                BOX[i][1] = p[2];
                BOX[i][0] = p[3];
            }
            return j != 4;
        case 75:  // 向左按键
            j = 0;
            for(i=0; i<4; i++){
                tp[0] = BOX[i][0];
                tp[1] = BOX[i][1];
                tp[2] = BOX[i][2];
                tp[3] = BOX[i][3];
                p = add(tp);
                if( !ifMove(tp)){ // 若不能移动，j+1
                    j++;
                }
                BOX[i][0] = p[0];
                BOX[i][1] = p[1];
                BOX[i][2] = p[2];
                BOX[i][3] = p[3];
            }
            return j != 4;
        case 27: // ESC退出键
            color(12);
            gotoxy(20,23);
            printf("确定退出游戏吗?(yes/no)");
            char c = getch();
            if( c == 'y' || c == 'Y'){
                exit(0);
            }
            if( c == 'n' || c == 'N'){
                gotoxy(20,23);
                printf("                         ");  // 输出一行空格，把上面按句话盖掉。
            }
            break;
        default: return 0;
    }
}
