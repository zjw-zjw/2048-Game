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
 *  �ж��Ƿ�ʤ��
*/

int Gamewin()
{
    int flag = 0;
    if(Boxmax() == 2048){
        system("cls");
        // ��ӡʤ����ͼ��,����ɫ
        color(2);
        gotoxy(1, 6);
        printf("  ��        ��         ��     �� �� �� �� ��     ��       ��\n");
        gotoxy(1, 7);
        printf("   ��      �� ��       ��          ��         ��  ��    ��\n");
        gotoxy(1, 8);
        printf("    ��    ��   ��     ��           ��         ��   ��   ��\n");
        gotoxy(1, 9);
        printf("     ��  ��    ��    ��            ��         ��    ��  ��\n");
        gotoxy(1, 10);
        printf("      ��        ��           �� �� �� �� ��     ��     �� ��\n");
        gotoxy(35, 17);
        color(13);
        printf("ʤ����~�������\n");
        flag = 1;
    }

    return flag;
}
