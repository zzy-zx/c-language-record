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
	char mine[ROWS][COLS];//��Ų��ú��׵���Ϣ;��ʼ��'0'
	char show[ROWS][COLS];//����Ų���׵���Ϣ;��ʼ��'*'
	//��ʼ��
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡһ������
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//������
	SetMine(mine,ROW,COL);
	//layBoard(mine, ROW, COL);
	
	//�Ų���
	FindMine(mine,show, ROW, COL);
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
			printf("ɨ����Ϸ\n");
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
