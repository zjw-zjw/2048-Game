#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/* ȫ�ֱ��� */
extern int step;  // ����
extern int score; // ����
extern long int Time;
extern int BOX[4][4];

/*
*   ��ʼ��Ϸ����
*/

void Gameplay()
{
    system("cls");
    int i, j = 0;
    Time = time(NULL);
    drawTheGameBox();

    srand(time(NULL));  // ����һ�����������

    // ���4*4���̵�λ��
    int a, b;
    do{
        a = rand() % 4;
        b = rand() % 4;
    }while(BOX[a][b] != 0);

    // ����2����4��������ڿո�
    if(rand() % 4 == 0){
        BOX[a][b] = 4;
    }else{
        BOX[a][b] = 2;
    }
    // ��ӡ����
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(BOX[i][j] == 0){
                continue;  // ����п�λ�Ļ��ͼ�����ȥ
            }
            gotoxy(15+j*10+5, 2+i*5+3);
            int c = BOX[i][j];
            TextColors(c); // ��������������ɫ
            printf("%d", c);
        }
    }

    // ����ÿ�ΰ����Ľ���仯
    while(1){
        while(_kbhit()){
            if( !keyboardControl(getch())){
                continue;  // ������µİ������Ƕ���ķ��������һֱѭ��ֱ�����·����Ϊֹ
            }
            // ��������
            drawTheGameBox(); // ÿ����һ�ΰ����������¼���һ��
            for(i=0; i<4; i++){
                for(j=0; j<4; j++){
                    if(BOX[i][j] == 0){
                        // ����������п�λ�Ļ�����ô�Ϳ���һֱ���а���
                        continue;
                    }
                    gotoxy(15+j*10+5, 2+i*5+3);
                    int c = BOX[i][j];
                    TextColors(c);
                    printf("%d", c);
                }
            }
            // ÿ����һ�ΰ��������ڼ������������һ��2����4
            do{
                a = rand() % 4;
                b = rand() % 4;
            }while(BOX[a][b] != 0);
            if(rand() % 4 == 0){
                BOX[a][b] = 4;
            }
            else{
                BOX[a][b] = 2;
            }
            gotoxy(15+b*10+5, 2+a*5+3);
            int c = BOX[a][b];
            TextColors(c);
            printf("%d", c);
            step++;
        }
    }

    //
    if(Gamefaile() + Gamewin() != 0){
        int n;
        color(12);
        gotoxy(20,20);
        printf("��Ҫ������һ��--------1");
        gotoxy(45, 20);
        printf("�����ˣ��˳�----------2");
        color(11);
        gotoxy(43, 21);
        scanf("%d", &n);
        switch(n){
            case 1:
                Replay();
                break;
            case 2:
                exit(0);
        }
    }
}
