#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//函数
//ret_type[返回类型] fun_name[函数名](paral[函数参数], *)
//{
//	statement;//语句项;//函数体:交代的是函数的实现
//}

//写一个函数交换两个整形

//void:代表该函数没有返回值
void Swap1(int x, int y)//Swap1--传值调用
{   //swap1在被调用的时候，实参传给形参，其实形参是实参的一份临时拷贝
	//so，改变形参不能改变实参
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
//函数定义
void Swap2(int* pa, int* pb)//形式参数-形参;Swap2--传址调用
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


int main()
{
	int a = 10;
	int b = 20;
	printf("交换前：a=%d b=%d\n", a, b);
	//Swap1(a, b);//swap-交换
	//函数调用
	Swap2(&a, &b);//实际参数-实参
	printf("交换后：a=%d b=%d\n", a, b);
	return 0;
}

////复习指针
//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa指针变量
//	*pa = 20;//解引用操作
//	printf("%d\n", a);
//	return 0;
//}

////写一个函数找出两个数中的最大值
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int max=get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//int Add(int x, int y)//int表示返回一个整形值
//{
//	int z = 0;
//	z = x + y;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//strcpy - string copy-字符串拷贝
//char * strcpy(char * destination, const char * source);
//strlen - string lrngth-字符串长度有关
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	              //"bit\0#######"遇到\0即结束了
//	strcpy(arr2, arr1);//strcpy(目的地，source)
//	printf("%s\n", arr2);
//	return 0;
//}
////memset
////memory(内存) set(设置)
////void * memset ( void * ptr, int value, size_t num );
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

