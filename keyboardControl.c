#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

/* ȫ�ֱ��� */
extern int step;  // ����
extern int score; // ����
extern long int Time;
extern int BOX[4][4];

// ���̿����ƶ�
int keyboardControl(int key)
{
    int i, j = 0;
    int *p;  // ָ��p���պϲ��������
    int tp[4] = {0}; // ���м����������
    switch(key){
        case 72:  // ���ϼ�
            for(i=0; i<4; i++){
                // ��һ�е�����ת�Ƶ�tp��������ʱ���
                tp[0] = BOX[0][i];
                tp[1] = BOX[1][i];
                tp[2] = BOX[2][i];
                tp[3] = BOX[3][i];
                p = add(tp);
                if( !ifMove(tp)){ // �������ƶ���j+1
                    j++;
                }
                BOX[0][i] = p[0];
                BOX[1][i] = p[1];
                BOX[2][i] = p[2];
                BOX[3][i] = p[3];
            }
            return j != 4;
        case 80: // ���¼�
            j = 0;
            for(i=0; i<4; i++){
                tp[0] = BOX[3][i];
                tp[1] = BOX[2][i];
                tp[2] = BOX[1][i];
                tp[3] = BOX[0][i];
                p = add(tp);
                if( !ifMove(tp)){ // �������ƶ���j+1
                    j++;
                }
                BOX[3][i] = p[0];
                BOX[2][i] = p[1];
                BOX[1][i] = p[2];
                BOX[0][i] = p[3];
            }
            return j != 4;
        case 77:  // ���Ұ���
            j = 0;
            for(i=0; i<4; i++){
                tp[0] = BOX[i][3];
                tp[1] = BOX[i][2];
                tp[2] = BOX[i][1];
                tp[3] = BOX[i][0];
                p = add(tp);
                if( !ifMove(tp)){ // �������ƶ���j+1
                    j++;
                }
                BOX[i][3] = p[0];
                BOX[i][2] = p[1];
                BOX[i][1] = p[2];
                BOX[i][0] = p[3];
            }
            return j != 4;
        case 75:  // ���󰴼�
            j = 0;
            for(i=0; i<4; i++){
                tp[0] = BOX[i][0];
                tp[1] = BOX[i][1];
                tp[2] = BOX[i][2];
                tp[3] = BOX[i][3];
                p = add(tp);
                if( !ifMove(tp)){ // �������ƶ���j+1
                    j++;
                }
                BOX[i][0] = p[0];
                BOX[i][1] = p[1];
                BOX[i][2] = p[2];
                BOX[i][3] = p[3];
            }
            return j != 4;
        case 27: // ESC�˳���
            color(12);
            gotoxy(20,23);
            printf("ȷ���˳���Ϸ��?(yes/no)");
            char c = getch();
            if( c == 'y' || c == 'Y'){
                exit(0);
            }
            if( c == 'n' || c == 'N'){
                gotoxy(20,23);
                printf("                         ");  // ���һ�пո񣬰����水�仰�ǵ���
            }
            break;
        default: return 0;
    }
}
