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
*   �ж��Ƿ�ʧ��
*/

int Gamefaile()
{
    int flag = 0;
    int max;
    if( ifup() + ifdown() + ifleft() + ifright() == 0){
        system("cls");
        color(14);
        gotoxy(34, 3);
        printf("�ϲ������������: ");
        color(11);
        gotoxy(52, 3);
        max = Boxmax();
        printf("%d",  max);

        // ��ӡʧ�ܽ���
        gotoxy(19, 6);
        color(4);  // ����ɫ
        printf("    �� �� �� �� ��       ��        ��       �� ��       \n");
        gotoxy(19, 7);
        printf("    ��               �� ��      ��       ��   ��      \n");
        gotoxy(19, 8);
        printf("    ��               ��  ��     ��       ��    ��     \n");
        gotoxy(19, 9);
        printf("    ��               ��   ��    ��       ��     ��     \n");
        gotoxy(19, 10);
        printf("    �� �� �� ��         ��    ��   ��       ��     ��     \n");
        gotoxy(19, 11);
        printf("    ��               ��     ��  ��       ��    ��     \n");
        gotoxy(19, 12);
        printf("    ��               ��      �� ��       ��   ��     \n");
        gotoxy(19, 13);
        printf("    �� �� �� �� ��       ��        ��       ��  ��     \n");
        gotoxy(34, 17);
        color(13);
        printf("�޷��ƶ�����Ϸʧ�ܣ�");
        flag = 1;
    }
    return flag;
}
