#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>



//实例一
//实现代码：求 1！+ 2！+ 3！... + n!；不考虑溢出。
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	//int ret = 1;
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for ( j = 1; j <= n ; j++)
//	{
//		ret = 1;//(调试结果)
//		for (i = 1; i <= j; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	
//	}
//	
//	
//	printf("%d\n", sum);
//	return 0;
//}
//这时候我们如果3，期待输出9，但实际输出的是15。
//why ?
//这里我们就得找我们问题。
//1. 首先推测问题出现的原因。初步确定问题可能的原因最好。
//2. 实际上手调试很有必要。
//3. 调试的时候我们心里有数。



//实例二
int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//如果将int i = 0; 放到arr后就不会循环
	//0 - 9
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe\n");
	}
	//运行结果是什么
	return 0;
}
//研究程序死循环的原因
//&i == &arr[12]
// 一 :i和arr是局部变量
//局部变量是放在栈区上的
//栈区内存的使用习惯是:
// 先使用高地址空间，在使用低地址空间
// 二 :数组随者下标的增长,地址是由低到高变化的
//VC6.0 - 0个整形
//gcc - 1个整形
// VS2013-VS2019 - 2个整形 
//


