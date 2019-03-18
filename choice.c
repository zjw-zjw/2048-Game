#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

/* 全局变量 */
extern int step;  // 步数
extern int score; // 分数
extern long int Time;
extern int BOX[4][4];

/*
 *   选择栏,菜单选项
*/

void choice()
{
    int n;
    int i;
    int j = 1;
    // 打印2048的标题
    color(13);
    gotoxy(32, 8);
    printf("挑 战 2 0 4 8");

    // 打印黄色边框
    color(14);
    for(i = 9; i <= 20; i++){
        for(j = 15; j <= 60; j++){
            gotoxy(j, i); // j表示x轴坐标，i表示y轴坐标
            if(i == 9 || i == 20){
                printf("=");
            }else if(j == 15 || j == 59){
                printf("||");
            }
        }
    }

    // 打印4个选项
    color(12);  // 红色
    gotoxy(25, 12);
    printf("1.开始游戏");
    gotoxy(40, 12);
    printf("2.游戏规则");
    gotoxy(25, 16);
    printf("3.按键说明");
    gotoxy(40, 16);
    printf("4.退出");

    color(13); // 深紫色
    gotoxy(21, 22);
    printf("        请选择[1 2 3 4]:[ ]\b\b");  // \b用来退格
    scanf("%d", &n);

    switch(n){
        case 1: // 开始游戏
            system("cls"); // 运行游戏界面时，先清下屏
            Gameplay();
            break;
        case 2:
            regulation();  // 规则说明

            break;
        case 3:
            break;
        case 4:
            exit(0);
            break;
    }

}
