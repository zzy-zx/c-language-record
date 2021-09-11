#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//二分查找
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
	int left = 0;//左下标
	int right = sz - 1;//右下标

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k) //arr[mid]:数组中下标为mid所代表的数
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("找不到了");
	}
	return 0;
}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//写一个代码，在arr数组（有序）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//
//}


////在屏幕上输出9*9乘法口决表
////1*1=1
////2*1=2 2*2=4
////3*1=3 3*2=6 3*3=9
////.......
////9*1=9...
//int main()
//{
//	int i = 0;
//	//确定打印9行
//	for ( i = 1; i <=9; i++)
//	{
//		//打印一行
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//%2d：右对齐，%-2d：左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


////求10个整数中最大值
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];//假设最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


////分数求和
////计算1/1-1/2+1/3-1/4......+1/99-1/100的值，打印结果
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for ( i = 1; i <=100; i++)
//	{
//		sum+=1.0 / i;
//		flag = -flag;//妙啊
//	}
//	printf("%lf\n", sum);
//    return 0;
//}


//////数出1-100内出现9的个数
////int main()
////{
////	int i= 0;
////	int count = 0;
////	for ( i = 1; i <=100; i++)
////	{
////		if (i % 10 == 9)
////			count++;
////		if (i / 10 == 9)
////			count++;
////	}
////	printf("count=%d\n", count);
////	return 0;
////}


////打印100-200的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt-开平方的数学库函数
//	for ( i = 100; i <=200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2->i-1的数字
//		int j = 0;
//		for ( j = 2; j <=sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		//int j = 0;
//		//for ( j = 2; j < i; j++)
//		//{
//		//	if (i%j == 0)
//		//	{
//		//		break;
//		//	}
//		//}
//		//if (j == i)
//		//{
//		//	printf("%d ", i);
//		//	count++;
//		//}
//	}
//	printf("\ncount=%d\n ", count);
//	return 0;
//}//素数的n种求法


//
////打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		////判断year是否为闰年
//		////1.能被4整除并且不能被100整除是闰年
//		////2.能被400整除是闰年
//		//if (year%4==0 && year%100!=0)
//		//{
//		//	printf(" %d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf(" %d ", year);
//		//	count++;
//		//}
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf(" %d ", year);
//			count++;
//		}
//	}
//	printf("\n count=%d\n",count);
//	return 0;
//}


////给两个数，求这两个数的最大公约数
////辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)//能整除就是0为假跳出循环
//	{
//		//r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


////打印1-100之间3的倍数的数字
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <=100; i++)
//	{
//		if (i % 3 == 0)//i除3后的余数
//			printf("%d\n", i);
//	}
//	return 0;
//}
//


////要求：将三个数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a,&b,&c);
//	//算法实现
//	//a中放最大值
//	//b次之
//	//c中放最小值
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
