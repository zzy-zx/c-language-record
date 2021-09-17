#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//青蛙跳台阶
//一只青蛙一次可以跳上1级台阶, 也可以跳上2级。
//求该青蛙跳上一个n级的台阶总共有多少种跳法?(先后次序不同算不同的结果)。
int c = 0;
int Qwt(int n)
{
	int a = 1;
	int b = 2;
	if (n == 1)
		c = 1;
	if (n == 2)
		c = 2;
	else
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Qwt(n);
	printf("%d\n", ret);
	return 0;
}

//一只青蛙一次可以跳上1级台阶，也可以跳上2级……它也可以跳上n级。
//求该青蛙跳上一个n级的台阶总共有多少种跳法。
