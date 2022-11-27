#define ROW 3
#define COL 3

#include<stdlib.h>
#include<time.h>

//函数声明
void menu();

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘
void Displayboard(char board[ROW][COL],int row,int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);

//1.玩家赢   - *
//2.电脑赢   - #
//3.平局     - Q
//4.游戏继续 - C
char IsWin(char board[ROW][COL], int row, int col);



