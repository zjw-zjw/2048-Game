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
 *   ѡ����,�˵�ѡ��
*/

void choice()
{
    int n;
    int i;
    int j = 1;
    // ��ӡ2048�ı���
    color(13);
    gotoxy(32, 8);
    printf("�� ս 2 0 4 8");

    // ��ӡ��ɫ�߿�
    color(14);
    for(i = 9; i <= 20; i++){
        for(j = 15; j <= 60; j++){
            gotoxy(j, i); // j��ʾx�����꣬i��ʾy������
            if(i == 9 || i == 20){
                printf("=");
            }else if(j == 15 || j == 59){
                printf("||");
            }
        }
    }

    // ��ӡ4��ѡ��
    color(12);  // ��ɫ
    gotoxy(25, 12);
    printf("1.��ʼ��Ϸ");
    gotoxy(40, 12);
    printf("2.��Ϸ����");
    gotoxy(25, 16);
    printf("3.����˵��");
    gotoxy(40, 16);
    printf("4.�˳�");

    color(13); // ����ɫ
    gotoxy(21, 22);
    printf("        ��ѡ��[1 2 3 4]:[ ]\b\b");  // \b�����˸�
    scanf("%d", &n);

    switch(n){
        case 1: // ��ʼ��Ϸ
            system("cls"); // ������Ϸ����ʱ����������
            Gameplay();
            break;
        case 2:
            regulation();  // ����˵��

            break;
        case 3:
            break;
        case 4:
            exit(0);
            break;
    }

}
