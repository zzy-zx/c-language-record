#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("                                   \n");
	printf("            1.    play             \n");
	printf("            0.    exit             \n");
	printf("                                   \n");
}

void game()
{
	char mine[ROWS][COLS];//存放布置好雷的信息;初始化'0'
	char show[ROWS][COLS];//存放排查出雷的信息;初始化'*'
	//初始化
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印一下棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//布置雷
	SetMine(mine,ROW,COL);
	//layBoard(mine, ROW, COL);
	
	//排查雷
	FindMine(mine,show, ROW, COL);
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
			printf("扫雷游戏\n");
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
