#define _CRT_SECURE_NO_WARNINGS 1
#include "三子棋game.h"
#include<stdio.h>

void menu()
{
	printf("******************************************\n");
	printf("*************  1.play    0.exit   ********\n");
	printf("************** 2. PLAY *******************\n");
}

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//void Displayboard(char board[ROW][COL], int row, int col)
//{
//	for (int i = 0; i < row; i++)
//	{
//		//1.打印一行的数据
//		printf(" %c | %c | %c \n",board[i][0], board[i][1], board[i][2]);
//		//2.打印分割行
//		if(i<row -1)
//		printf("---|---|---\n");
//	}
//}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for ( i = 0; i < row; i++)
	{
		//1.打印一行的数据
		int j = 0;
		for ( j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2.打印分割行
		if (i < row - 1)
		{
			int j = 0;
			for ( j = 0; j < col; j++)
			{
				printf("---");
				if(j<col-1)
					printf("|");
			}
			printf("\n");
		}
	}
}


void PlayerMove(char board[ROW][COL], int row, int col)
{	int x = 0;
	int y = 0;
	

	printf("玩家走:>\n");
	while (1)
	{
		printf("请输入要下的坐标:>");
		scanf("%d %d", &x, &y);

		//判断x,y坐标的合法性
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y -1 ] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			
			else
			{
				printf("该坐标被占用\n");
				

			}
		}
		else
		{
			printf("坐标非法，请重新输入!\n");
		}
	}
}

void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走:>\n");
	while (1)
	{
		int x = rand()%row;
		int y = rand()%col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}

}

int IsFull(char board[ROW][COL], int row, int col)
{

	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] = ' ')
			{
				return 0;//棋盘满了
			}

		}
	}
	return 1;//棋盘没满

}







	
//判断游戏输赢
char IsWin(char board[ROW][COL], int row, int col)
{
	//判断三行
	int i;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][2] == board[i][1] && board[i][0] != ' ')
		{
			return board[i][0];//
		}
	}
	//判断三列
	for ( i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[2][i] == board[1][i] && board[0][i] != ' ')
		{
			return board[0][i];//
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[2][2] == board[1][1] && board[0][0] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[2][0] == board[1][1] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断平局
	//如果棋盘满了返回1，不满返回0
	int ret = IsFull(board, row, col);
	if (ret == 1)
	{
		return 'Q';
	}

	//继续
	return 'C';
}







