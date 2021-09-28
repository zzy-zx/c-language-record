#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//1. 指针是什么？

//指针是个变量，存放内存单元的地址（编号）。
//那对应到代码：
//int main()
//{
//	int a = 10;//在内存中开辟一块空间
//	int* p = &a;//这里我们对变量a，取出它的地址，可以使用&操作符。
//	 //将a的地址存放在p变量中，p就是一个指针变量。
//	*p = 20;
//	return 0;
//}

//总结：指针就是变量，用来存放地址的变量(存放在指针中的值都被当成地址处理)
//一个小的单元到底是多大？（1个字节）
//指针的大小在32位平台是4个字节，在64位平台是8个字节。


//2. 指针和指针类型
//int main()
//{
//	int* pa;
//	char* pc;
//	float* pf;
//	printf("%p\n", sizeof(pa));
//	printf("%p\n", sizeof(pc));
//	printf("%p\n", sizeof(pf));
//	return 0;
//}
//指针类型的意义是什么?
//int main()
//{
//	//0 1 2 3 4 5 6 7 8 9 a b c d e f
//	//4个二进制位表示为一个十六进制位f
//	int a = 0x11223344;
//	char* pc = &a;
//	*pc = 0;
//	//int* pa = &a;
//	//*pa = 0;
//	return 0;
//}
//指针类型的意义
//1.指针类型决定了:指针解引用的权限有多大
//2.指针类型决定了:指针向前或者向后走一步有多大（距离）
//int main()
//{
//	int arr[10] = { 10 };
//	int* p = arr;
//	char* pc = arr;
//	printf("%p\n", p);
//	printf("%p\n", p + 1);
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);
//	return 0;
//}
int main()
{
	int arr[10] = { 0 };
	//int* p = arr;
	char* p = arr;
	int i = 0;
	for ( i = 0; i <10; i++)
	{
		*(p + i) = 1;
	}
	printf("%d\n", arr[1]);
	return 0;
}