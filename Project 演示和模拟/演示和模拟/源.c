#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char passward[20] = { 0 };
	for ( i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", passward);
		if (strcmp(passward,"123456")==0)// == 不能用来比较两个字符串是否相等,应该用一个库函数-strcmp
		{
			printf("登入成功\n");
			break;
		}
		else
		{
			printf("密码错误\n");
		}
	}
	if (i==3)
	{
		printf("三次密码均错误，账户已锁定\n");
	}
	return 0;
}


////演示多个字符从两端移动，向中间汇聚。
//int main()
//{
//	//char arr[]="abc"
//	//     [a b c \0];元素个数是四个
//	//下标是0 1 2 3 ；所以是4-2
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	char arr1[] = "welcome to my world!!!";
//	char arr2[] = "                      ";
//	int left = 0;//左下标
//	int right = strlen(arr1) - 1;//右下标；//strlen不包含'\0'
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(200);//毫秒
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}