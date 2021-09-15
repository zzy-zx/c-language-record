#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字
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
	//1.生成一个随机数
	int ret = 0;
	int guess = 0;
	//拿时间戳来设置随机数的生成起始点
	//time_t time( time_t *timer )
	ret=rand()%100+1; //生成1-100的随机数 //RAND_MAX-32767
    //printf("%d\n",ret);
	//2.猜数字
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess>ret)
		{
			printf("大了\n");
		}
		else if (guess < ret)
		{
			printf("小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}

}

int main()
{
	int input1 = 0;
	int input2 = 0;
	srand((unsigned int)time(NULL));//NULL-空指针
	z();
	menu1();
	printf("请选择>:");
	scanf("%d", &input1);
	switch (input1)
	{
	case 1:
		game();//猜数字过程
		break;
	case 0:
		printf("退出游戏\n");
		break;
	default:
		printf("选择错误\n");
	}
	//
	do
	{
		menu2();
		printf("请选择>:");
		scanf("%d", &input2);//变量要取地址
		switch (input2)
		{
		case 1:
			game();//猜数字过程
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} 
	while (input2);
	//do-while语句
	return 0;
}

int z()
{
	//char arr[]="abc"
	//     [a b c \0];元素个数是四个
	//下标是0 1 2 3 ；所以是4-2
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
	char arr1[] = " 欢迎来到猜数字游戏!!! ";
	char arr2[] = "                       ";
	int left = 0;//左下标
	int right = strlen(arr1) - 1;//右下标；//strlen不包含'\0'
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		//休息一秒
		Sleep(100);//毫秒
		system("cls");//执行系统命令的一个函数-cls-清空屏幕
		left++;
		right--;
	}
	printf("%s\n", arr1);
	return 0;
}
