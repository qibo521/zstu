#define _CRT_SECURE_NO_WARNINGS 1

#include "������game.h"
//������������Ϸ

#include<stdio.h>
#include "������game.h"

//void menu()
//{
//	printf("******************************************\n");
//	printf("*************  1.play    0.exit   ********\n");
//	printf("******************************************\n");
//}

//��Ϸ������ʵ��
void game()
{
	

	//����-����߳���������Ϣ
	char board[ROW][COL] ;//ȫ���ո�
	//��ʼ������
	InitBoard(board,ROW,COL);
	//��ӡ����
	Displayboard(board,ROW,COL);
	//����

	char ret = 0;//������Ϸ״̬
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		 ret = IsWin(board,ROW,COL);
		if (ret != 'C')
			break;

		
		//��������
		ComputerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		 ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;

	}
	if (ret == '*')
	{
		printf("���Ӯ\n");
		
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
		
	}
	else
	{
		printf("ƽ��\n");
	}
	Displayboard(board, ROW, COL);
}

void game2()
{
	int zhi = 1;
	int p = 1;

	//����-����߳���������Ϣ
	char board[ROW][COL];//ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW, COL);
	//��ӡ����
	Displayboard(board, ROW, COL);
	//����

	char ret = 0;//������Ϸ״̬
	char count = 0;
	while (1)
	{
		//��������
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
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;


		//�������
		PlayerMove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret == '*')
	{
		printf("���Ӯ\n");

	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");

	}
	else
	{
		printf("ƽ��\n");
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
		printf("��ѡ��:>");
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
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);

}

int main()
{
	test();
	return 0;
}