#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

//��������Ϸ
//1.���Ի�����һ�������
//2.������
//RAND_MAX-32767


void menu()
{
	printf("                                              \n");
	printf("             1. play       0.exit             \n");
	printf("                                              \n");
}
//RAND_MAX-32767

void game()
{
	//1.����һ�������
	int ret = 0;
	int guess = 0;
	//��ʱ����������������������ʼ��
	//time_t time( time_t *timer )
	ret = rand() % 100 + 1; //����1-100������� //RAND_MAX-32767
	//printf("%d\n",ret);
	//2.������
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess>ret)
		{
			printf("����\n");
		}
		else if (guess < ret)
		{
			printf("С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}

}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//NULL-��ָ��
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);//����Ҫȡ��ַ
		switch (input)
		{
		case 1:
			game();//�����ֹ���
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
	//do-while���
	return 0;
}