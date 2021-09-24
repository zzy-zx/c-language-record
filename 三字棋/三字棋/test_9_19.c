#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
// - ������Ϸ���߼�
// - ������Ϸ��صĺ�������������������ͷ�ļ��İ���
//test.c - ��Ϸ��غ�����ʵ��

void menu()
{
	printf("                                        \n");
	printf("              1.    play                \n");
	printf("              0.    exit                \n");
	printf("                                        \n");
}
void game()
{
	//�洢���� - ��ά����
	char board[ROW][COL];
	//��ʼ������ - ��ʼ���ո�
	InitBoard(board, ROW, COL);
	//��ӡһ������ - �����Ǵ�ӡ��������
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	//��0
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ(��Ϸ״̬)
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
		//��������
		ComputerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	if (ret=='*')
	{
		printf("���Ӯ��\n");
	}
	else if (ret=='#')
	{
		printf("����Ӯ��\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��������Ϸ\n");
			game();
		    break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}
