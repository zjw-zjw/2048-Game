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
 * �ж��ܷ��ƶ�����,����1��������ƶ�������0�������ƶ�
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
