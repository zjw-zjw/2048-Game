/*
*   ���Ʊ���:2048
*/

#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

/* ȫ�ֱ��� */
extern int step;  // ����
extern int score; // ����
extern long int Time;
extern int BOX[4][4];

void title()
{
    color(11);  // ǳ��ɫ
    gotoxy(19, 2); // ��һ�е�һ��λ�õ�ֵ
    printf("������    ��������    ��   ��      ��������");
    gotoxy(19, 3);
    printf("    ��    ��    ��    ��   ��      ��    �� ");
    gotoxy(19, 4);
    printf("������    ��    ��    ��   ��      ��������");
    gotoxy(19, 5);
    printf("��        ��    ��    ��������     ��    ��");
    gotoxy(19, 6);
    printf("������    ��������         ��      ��������");
}
