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
 *  ��������������ɫ
*/

int TextColors(int number)
{
    switch(number){
        case 2:
            return color(12); // ��ɫ
            break;
        case 4:
            return color(11); // ����ɫ
            break;
        case 8:
            return color(10);
            break;
        case 16:
            return color(14);
            break;
        case 32:
            return color(6);
            break;
        case 64:
            return color(5);
            break;
        case 128:
            return color(4);
            break;
        case 256:
            return color(3);
            break;
        case 512:
            return color(2);
            break;
        case 1024:
            return color(9);
            break;
        case 2048:
            return color(7);
            break;
    }

   return 0;
}
