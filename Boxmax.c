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
 * ���������е����ֵ
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
