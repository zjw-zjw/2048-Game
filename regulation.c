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
*  ��Ϸ�������
*/

void regulation()
{
    int i, j;
    system("cls");
    color(13);
    gotoxy(34, 3);
    printf("��Ϸ����");

    color(2);
    for(i=6; i<=18; i++){
        for(j=15; j<70; j++){
            gotoxy(j, i);
            if(i==6 || i==18){
                printf("=");
            }
            else if(j == 15 || j == 69){
                printf("||");
            }
        }
    }
    color(3);
        gotoxy(18, 7);
        printf("tip1: ��ҿ�ͨ�� �� �� �� �� ��������ƶ�����");
        color(10);
        gotoxy(18, 9);
        printf("tip2: �� ESC �˳���Ϸ");
        color(14);
        gotoxy(18, 11);
        printf("tip3: ���ѡ��ķ�����������ͬ����������Ժϲ�");
        color(11);
        gotoxy(18, 13);
        printf("tip4: ÿ�ƶ�һ������λ�������һ��2��4");
        color(14);
        gotoxy(18, 15);
        printf("tip5: ���̱������������޷�������Ч�ϲ�����Ϸʧ��");
        color(5);
        gotoxy(18, 17);
        printf("tip6: �����ϳ���2048����Ϸʤ��");
        getch();
        system("cls");
        main();
}
