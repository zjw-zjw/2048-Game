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
int ifup()
{
    int i, j;
    int flag = 0;
    for(j=0; j<4; j++){
        for(i=0; i<3; i++){
            if( if2n(BOX[i][j] + BOX[i+1][j]) && BOX[i+1][j]){
                flag = 1;
            }
        }
    }

    return flag;
}
