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
*   ������Ϸ����
*/
void drawTheGameBox()
{
    int i, j, k;
    // ��ɫ�߿�
    color(14);
    // ��ӡ��߿�
    for(j = 2; j <= 22; j=j+5){
        // j��ʾ������
        gotoxy(15, j);
        for(k = 1; k < 42; k++){
            printf("-");
        }
        printf("\n");
    }

    // ��ӡ���߿�
    // ÿһ��ѭ����ӡһ�е�5�����߿�
    for(i = 3; i < 7; i++){
        gotoxy(15, i);
        printf("|         |         |         |         |");
    }
    for(i = 8; i < 12; i++){
        gotoxy(15, i);
        printf("|         |         |         |         |");
    }
    for(i = 13; i < 17; i++){
        gotoxy(15, i);
        printf("|         |         |         |         |");
    }
    for(i = 18; i < 22; i++){
        gotoxy(15, i);
        printf("|         |         |         |         |");
    }

    // ��ӡ��Ϸ��Ϣ
    // ��Ϸ������ǳ��ɫ
    color(11);
    gotoxy(16, 1);
    printf("��Ϸ����: %ld", score);

    // ��ӡִ�в�������ɫ
    color(13);
    gotoxy(42, 1);
    printf("ִ�в���: %d", step);

    // ��ӡ����ʱ����ɫ
    color(10);
    gotoxy(44, 23);
    printf("����ʱ�� %d s", time(NULL)-Time);  // time(NULL)��ʾ1970�꿪ʼ�����ڵ�ʱ�䣬��λ����
                                               // ��time(NULL) ��ȥ���Ǹտ�ʼ������Ϸ��ʱ��Time��
                                               // �Ϳ��Եó�����ʱ��
}
