#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
/* ȫ�ֱ��� */
extern int step;  // ����
extern int score; // ����
extern long int Time;
extern int BOX[4][4];

/*
 *  �ж������ܷ�����
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
