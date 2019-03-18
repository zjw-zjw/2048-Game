#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>
#include <time.h>

/* 全局变量 */
extern int step;  // 步数
extern int score; // 分数
extern long int Time;
extern int BOX[4][4];

/*
*   开始游戏函数
*/

void Gameplay()
{
    system("cls");
    int i, j = 0;
    Time = time(NULL);
    drawTheGameBox();

    srand(time(NULL));  // 定义一个随机数种子

    // 获得4*4棋盘的位置
    int a, b;
    do{
        a = rand() % 4;
        b = rand() % 4;
    }while(BOX[a][b] != 0);

    // 设置2或者4随机出现在空格处
    if(rand() % 4 == 0){
        BOX[a][b] = 4;
    }else{
        BOX[a][b] = 2;
    }
    // 打印出来
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            if(BOX[i][j] == 0){
                continue;  // 如果有空位的话就继续下去
            }
            gotoxy(15+j*10+5, 2+i*5+3);
            int c = BOX[i][j];
            TextColors(c); // 根据数字设置颜色
            printf("%d", c);
        }
    }

    // 设置每次按键的界面变化
    while(1){
        while(_kbhit()){
            if( !keyboardControl(getch())){
                continue;  // 如果按下的按键不是定义的方向键，就一直循环直到按下方向键为止
            }
            // 绘制棋盘
            drawTheGameBox(); // 每进行一次按键，就重新加载一次
            for(i=0; i<4; i++){
                for(j=0; j<4; j++){
                    if(BOX[i][j] == 0){
                        // 如果棋盘上有空位的话，那么就可以一直进行按键
                        continue;
                    }
                    gotoxy(15+j*10+5, 2+i*5+3);
                    int c = BOX[i][j];
                    TextColors(c);
                    printf("%d", c);
                }
            }
            // 每进行一次按键，就在键盘上随机出现一个2或者4
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
        printf("我要重新玩一局--------1");
        gotoxy(45, 20);
        printf("不玩了，退出----------2");
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
