#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <time.h>
/* ȫ�ֱ��� */
int step = 0;  // ����
int score = 0; // ����
long int Time;
int BOX[4][4] = {0};

HANDLE hOut;

/* �������� */
void drawTheGameBox();          // ������Ϸ����
void gotoxy(int x, int y);      // �����Ļ���λ��
int color(int c);               // ����������ɫ
int TextColors(int i);          // ���������޸���ɫ
int *add(int item[]);           // �ϲ�����
int ifMove(int item[]);         // �ж��Ƿ��ܹ��ƶ����֣�����1��ʾ�ܶ�������0��ʾ�����ƶ�
void Gameplay();                // ��ʼ��Ϸ
void Replay();                  // ������Ϸ
int if2n(int x);                // �ж��Ƿ���2��n�η�
int ifup();                     // �ж��Ƿ��ܹ����ƣ� ��������(�����е������������2��n�η�)������1�����򷵻�0
int ifdown();                   // �ж��Ƿ��ܹ����ƣ� ��������(�����е������������2��n�η�)������1�����򷵻�0
int ifleft();                   // �ж��Ƿ��ܹ����ƣ� ��������(�����е������������2��n�η�)������1�����򷵻�0
int ifright();                  // �ж��Ƿ��ܹ����ƣ� ��������(�����е������������2��n�η�)������1�����򷵻�0
int Boxmax();                   // �������������
int Gamefaile();                // �ж��Ƿ�ʧ��
int Gamewin();                  // �ж��Ƿ�ʤ��
int keyboardControl(int key);   // ���̿����ƶ�
void close();                   // �ر���Ϸ
void title();                   // ���Ʊ���
void choice();                  // ѡ����
void Rabbit();                  // �����ַ���
void regulation();              // ��Ϸ�������
void explanation();             // ��Ϸ˵��

int main()
{
    title();
    Rabbit();
    choice();
    printf("\n");
    return 0;
}

