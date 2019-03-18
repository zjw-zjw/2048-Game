#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <time.h>
/* 全局变量 */
int step = 0;  // 步数
int score = 0; // 分数
long int Time;
int BOX[4][4] = {0};

HANDLE hOut;

/* 函数声明 */
void drawTheGameBox();          // 绘制游戏界面
void gotoxy(int x, int y);      // 获得屏幕光标位置
int color(int c);               // 设置文字颜色
int TextColors(int i);          // 根据数字修改颜色
int *add(int item[]);           // 合并数字
int ifMove(int item[]);         // 判断是否能够移动数字，返回1表示能动，返回0表示不能移动
void Gameplay();                // 开始游戏
void Replay();                  // 重新游戏
int if2n(int x);                // 判断是否是2的n次方
int ifup();                     // 判断是否能够上移， 可以上移(格子中的两个数相加是2的n次方)，返回1，否则返回0
int ifdown();                   // 判断是否能够下移， 可以下移(格子中的两个数相加是2的n次方)，返回1，否则返回0
int ifleft();                   // 判断是否能够左移， 可以左移(格子中的两个数相加是2的n次方)，返回1，否则返回0
int ifright();                  // 判断是否能够右移， 可以右移(格子中的两个数相加是2的n次方)，返回1，否则返回0
int Boxmax();                   // 返回棋盘最大数
int Gamefaile();                // 判断是否失败
int Gamewin();                  // 判断是否胜利
int keyboardControl(int key);   // 键盘控制移动
void close();                   // 关闭游戏
void title();                   // 绘制标题
void choice();                  // 选择栏
void Rabbit();                  // 绘制字符画
void regulation();              // 游戏规则介绍
void explanation();             // 游戏说明

int main()
{
    title();
    Rabbit();
    choice();
    printf("\n");
    return 0;
}

