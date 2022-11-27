#define _CRT_SECURE_NO_WARNINGS 1

#include "三子棋game.h"
//测试三子棋游戏

#include<stdio.h>
#include "三子棋game.h"

//void menu()
//{
//	printf("******************************************\n");
//	printf("*************  1.play    0.exit   ********\n");
//	printf("******************************************\n");
//}

//游戏的整个实现
void game()
{
	

	//数组-存放走出的棋盘信息
	char board[ROW][COL] ;//全部空格
	//初始化棋盘
	InitBoard(board,ROW,COL);
	//打印棋盘
	Displayboard(board,ROW,COL);
	//下棋

	char ret = 0;//接收游戏状态
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断输赢
		 ret = IsWin(board,ROW,COL);
		if (ret != 'C')
			break;

		
		//电脑下棋
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断输赢
		 ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

	}
	if (ret == '*')
	{
		printf("玩家赢\n");
		
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
		
	}
	else
	{
		printf("平局\n");
	}
	Displayboard(board, ROW, COL);
}

void game2()
{
	int zhi = 1;
	int p = 1;

	//数组-存放走出的棋盘信息
	char board[ROW][COL];//全部空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	//打印棋盘
	Displayboard(board, ROW, COL);
	//下棋

	char ret = 0;//接收游戏状态
	char count = 0;
	while (1)
	{
		//电脑下棋
		for (int i = 0;i < 3;i++)
		{
			for (int j = 0;j < 3;j++)
			{
				if (board[i][j] == '#' || board[i][j] == '*')
					count++;
			}
		}
		switch (count)
		{
		case 0:
			board[1][1] = '#';
			count = 0;
			break;
		case 2:
			board[2][0] = '#';
			count = 0;
			break;
		case 4:
			board[2][2] = '#';
			count = 0;
			break;
		case 6:
			board[2][1]='#';
			count = 0;
			break;
		}


		//ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;


		//玩家下棋
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("玩家赢\n");

	}
	else if (ret == '#')
	{
		printf("电脑赢\n");

	}
	else
	{
		printf("平局\n");
	}
	Displayboard(board, ROW, COL);
}
void test()
{
	int input =0;

	srand((unsigned int)time(NULL));
	do
	{

		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			game2();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}