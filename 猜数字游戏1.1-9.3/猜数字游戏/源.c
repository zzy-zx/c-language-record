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

void menu2()
{
	printf("                                              \n");
	printf("             1.again       0.exit             \n");
	printf("                                              \n");
}

void menu1()
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
	ret=rand()%100+1; //����1-100������� //RAND_MAX-32767
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
	int input1 = 0;
	int input2 = 0;
	srand((unsigned int)time(NULL));//NULL-��ָ��
	z();
	menu1();
	printf("��ѡ��>:");
	scanf("%d", &input1);
	switch (input1)
	{
	case 1:
		game();//�����ֹ���
		break;
	case 0:
		printf("�˳���Ϸ\n");
		break;
	default:
		printf("ѡ�����\n");
	}
	//
	do
	{
		menu2();
		printf("��ѡ��>:");
		scanf("%d", &input2);//����Ҫȡ��ַ
		switch (input2)
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
	} 
	while (input2);
	//do-while���
	return 0;
}

int z()
{
	//char arr[]="abc"
	//     [a b c \0];Ԫ�ظ������ĸ�
	//�±���0 1 2 3 ��������4-2
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	char arr1[] = " ��ӭ������������Ϸ!!! ";
	char arr2[] = "                       ";
	int left = 0;//���±�
	int right = strlen(arr1) - 1;//���±ꣻ//strlen������'\0'
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//��Ϣһ��
		Sleep(100);//����
		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
		left++;
		right--;
	}
	printf("%s\n", arr1);
	return 0;
}
