#define ROW 3
#define COL 3

#include<stdlib.h>
#include<time.h>

//��������
void menu();

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ����
void Displayboard(char board[ROW][COL],int row,int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void ComputerMove(char board[ROW][COL], int row, int col);

//1.���Ӯ   - *
//2.����Ӯ   - #
//3.ƽ��     - Q
//4.��Ϸ���� - C
char IsWin(char board[ROW][COL], int row, int col);



