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
 * �ϲ�����
*/
// ��������һ��int *���͵�ֵ
int *add(int item[])
{
    int i, j = 0;
    int tep[4] = {0};
    int tmp[4] = {0};

    for (i=0; i<4; i++){
        if(item[i] != 0){
            // ���������0���ͽ�item�����ִ���tep��
            // ��������Ŀ�ģ�����������ֵΪ0��λ�ã����ո��λ��
            tep[j++] = item[i];
        }
    }
    // ��tep�У�������������ͬ�ĸ��Ӻϲ�
    for(i=0; i<4; i++){
        if(tep[i] == tep[i+1]){
            tep[i] *= 2; // ����
            tep[i+1] = 0;
            score = score + tep[i];
        }
    }

    // ��tep�����в�Ϊ0����װ�Ƶ�һ��������tmp��
    j = 0;
    for(i=0; i<4; i++){
        if(tep[i] != 0){
            tmp[j++] = tep[i]; // ��tep�����в�Ϊ0����װ�Ƶ�tmp��
        }
    }

    return (int *)(&tmp);  // ���������׵�ַ
}
