#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
// - 测试游戏的逻辑
// - 关于游戏相关的函数声明，符号声明，头文件的包含
//test.c - 游戏相关函数的实现

void menu()
{
	printf("                                        \n");
	printf("              1.    play                \n");
	printf("              0.    exit                \n");
	printf("                                        \n");
}
void game()
{
	//存储数据 - 二维数组
	char board[ROW][COL];
	//初始化棋盘 - 初始化空格
	InitBoard(board, ROW, COL);
	//打印一下棋盘 - 本质是打印数组内容
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	//玩0
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢(游戏状态)
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑下棋
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret=='*')
	{
		printf("玩家赢了\n");
	}
	else if (ret=='#')
	{
		printf("电脑赢了\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);

}
int main()
{
	srand((unsigned int)time(NULL));

	int input = 0;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三字棋游戏\n");
			game();
		    break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}
