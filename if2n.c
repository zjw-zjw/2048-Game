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
 *  �ж�ĳ�����Ƿ���2��n�η�
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
