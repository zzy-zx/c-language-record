#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//关机程序
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system()-执行系统命令的
	system("shutdown -s -t 60");
//again:
	//printf("请注意，您的电脑将在1分钟内关机，如果输入：我是猪。就取消关机\n请输入:");
	//scanf("%s", input);
	//if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp（）
	//{
	//	system("shutdown -a");
	//}
	while (1)
	{
		printf("请注意，您的电脑将在1分钟内关机，如果输入：我是猪。就取消关机\n请输入:");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)//比较两个字符串-strcmp（）
		{
			system("shutdown -a");
		}
	}
	//else
	//{
	//	goto again;
	//}
	return 0;
}

////goto语句
//int main()
//{
//	again:
//	printf("hello\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("hehe\n");
//	return 0;
//}
//goto语句适用场景
//for (...)
//{
//	for (...)
//	{
//		for (...)
//		{
//			if (disaster)
//				goto error
//		}
//	}
//}


////do-while语句
//int main()
//{
//	int i = 1;
//	do
//	{
//		//if (i == 5)
//			//continue;
//		    //break;
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}


////for 变种
//
//int x, y;
//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//{
//	printf("hehe\n");
//}
//
//	for (;;)
//	{
//		printf("hehe\n");
//	}


////for语句
//int main()
//{
//	int i = 0;
//	  //初始化  判断   调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//continue;
//			//break;//跳出循坏
//		printf("%d", i);
//	}
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'8')
//			continue;
//	    putchar (ch);
//	}
//	return 0;
//}
////
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char  password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);
//	//缓冲区还剩一个“\n”
//	//读取一下‘\n’
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认（Y/N):>");
//	ret = getchar();
//	if (ret=='Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//  }