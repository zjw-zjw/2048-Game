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
    ���¿�ʼ��Ϸ
*/

void Replay()
{
    system("cls");
    // ��ղ����ͷ���
    score = 0;
    step = 0;
    // ���BOX����(��0)
    memset(BOX, 0, 16*sizeof(int));

    // ���µ�����Ϸ
    Gameplay();

}
