#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//数组
//type_t   arr_name[const_n];
//type_t 是指数组的元素类型
//const_n 是一个常量表达式，用来指定数组的大小
//int main()
//{
//	//int arr[8];
//	//char ch[5];
//	//int a = 0;//初始化
//	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//完全初始化
//	//int arr[10] = { 1,2,3,4,5 };//不完全初始化
//	//int arr2[] = { 1,2,3,4,5 };= int arr2[5] = { 1,2,3,4,5 }
//  //整形数组无\0;字符数组才有
// 
//	//char ch1[5] = { 'b','i','t' };
//	//char ch2[] = { 'b','i','t' };
//
//	//char ch3[5] = "bit"; //b i t \0 \0
//	//char ch4[] = "bit"; //b i t \0
//	char ch5[] = "bit"; //[b i t \0]
//	char ch6[] = { 'b','i','t' };//[b i t]
//	printf("%d\n", strlen(ch5));//3
//	printf("%d\n", strlen(ch6));//随机值
//	printf("%s\n", ch5);
//	printf("%s\n", ch6);
//	return 0;
//}

//一维数组的使用
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//[] - 下标引用操作符
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		print("%d", arr[i]);
//	}
//	return 0;
//}

//一维数组在内存中的存储
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//%p - 是按地址的格式打印 - %x十六进制的打印
//	}//十六进制:0-9  a  b  c  d  e  f
//	//               10 11 12 13 14 15
//	return 0;
//}

//1.一维数组在内存中是连续存放的
//2.随着数组下标的增长，元素的地址由高到底

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;//数组名是数组首元素的地址
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		printf("%d ", *p);
		p++;
	}
	return 0;
}

//内存
// 
//栈区:   局部变量
//(堆栈)  函数形参
//        调用函数
//        时返回值等
//        临时的变量
//
//堆区:   动态内存分配的
//        malloc/free,calloc,realloc
// 
//静态区: 全局变量
//        静态变量
//

////写一个%函数，打印乘法口诀表，口诀表的行数和列数自己指定
////1*1=1
////2*1=2 2*2=4
//void print_table(int n)
//{
//	int i = 0;
//	//行数
//	for ( i = 1; i <=n; i++)
//	{
//		//打印一行
//		int j = 0;
//		for ( j = 1; j <=i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}