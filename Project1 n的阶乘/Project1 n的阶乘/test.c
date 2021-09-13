#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//计算：1!+2!+3（简化）

int main()
{
	int n = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		ret = ret*n;
		sum = sum + ret;
	}
	printf("sum=%d\n", sum);
	return 0;
}

//计算：1!+2!+3!
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1;  i <= n; i++)
//		{
//			ret = ret*i;
//		}
//		sum = sum + ret;
//	}
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}
//
//
//
//n的阶乘
//
//int main()
//{
//	int n= 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for ( i=1; i<=n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
