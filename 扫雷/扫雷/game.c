#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0;j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("----------ɨ����Ϸ---------\n");
	//��ӡ�к�
	for (i = 0; i <=row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <=row; i++)
	{
		printf("%d ", i);//��ӡ�к�
		for (j = 1; j <=col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("----------ɨ����Ϸ---------\n");
}

void SetMine(char mine[ROWS][COLS], int row, int col)
{
	//����10����
	int count = EASY_COUNT;
	while (count)
	{
		//�����������
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y]=='0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
     //1.�����Ų������
	 //2.��������ǲ�����
	      //(1) ���� - �� - ��Ϸ����
	      //(2) ������ - ͳ��������Χ���� - �洢��Ϣ��show���飬��Ϸ����
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("�������Ų�����:>");
		scanf("%d%d", &x, &y);//x(1-9)y(1-9)
		//�ж�����ĺϷ���
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//ͳ��������Χ����
				int count = get_mine_count(mine, x, y);
				show[x][y] = count+'0';//'0' = 48
				//��ʾ�Ų���Ϣ
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("���겻�Ϸ�������������\n");
		}
	}
	if (win== row * col - EASY_COUNT)
	{
		printf("��ϲ�㣬���׳ɹ�\n");
		DisplayBoard(mine, ROW, COL);
	}
	
}

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���
static int get_mine_count(char mine[ROWS][COLS], int x, int y)//static:ֻ����game.c����
{
	//int i = 0;
	//for ( i = -1; i <=1; i++)
	//{
	//	int j = 0;
	//	for ( j = -1; j <=1; j++)
	//	{
	//		mine[x + i][y + j];
	//	}
	//}
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}