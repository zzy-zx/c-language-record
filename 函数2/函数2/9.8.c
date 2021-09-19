#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//函数的嵌套调用和链式访问

////嵌套调用
//int test2()
//{
//	test3();
//	return 0;
//}
//void test3()
//{
//	printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//}

#include<string.h>
////链式访问:把一个函数的返回值作为另外一个函数的参数。
//int main()
//{
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//	////链式访问
//	//1.printf("%d\n", strlen("abc"));
//	//char arr1[20] = { 0 };
//	//char arr2[] = "bit";
//	//2.printf("%s\n", strcpy(arr1, arr2));//将arr2的内容拷贝到arr1中
//
//	printf("%d\n", printf("%d", printf("%d", 43)));
//	//printf("%d", 43)返回的是打印在屏幕的个数
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	//函数声明一下 - 告知;
//	//1.先声明后使用
//  //2.声明一般放在头文件中
//	int Add(int, int);
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
////函数的定义-函数的具体实现，交待函数的功能实现
//int Add(int x, int y)
//{
//	return x + y;
//}

//#include"Add.h"//相当于将头文件的内容放过来
//#include"Sub.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = Add(a, b);
//	int c = Sub(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//导入静态库
#pragma comment(lib,"sub.lib")


