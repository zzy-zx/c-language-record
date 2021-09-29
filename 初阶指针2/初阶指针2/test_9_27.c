#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//3. 野指针
//概念:野指针就是指针指向的位置是不可知的(随机的.不正确的.没有明确限制的)
//(1)指针未初始化
//int main()
//{
//	//这里p就是一个野指针
//	int* p;//局部变量指针未初始化，默认为随机值
//	*p = 20;//非法访问内存了
//	return 0;
//}
////(2)指针越界访问
//int main()
//{
//	int arr[10] = { 10 };
//	int* p = arr;
//	int i = 0;
//	for ( i = 0; i <= 10; i++)
//	{
//		*p = i;
//      //当指针指向的范围超出数组arr的范围时，p就是野指针
//		p++;
//	}
//	return 0;
//}
//(3)指针指向的空间释放
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}
//当不知道p应该初始化为什么时，直接初始化为NULL
//如何规避野指针
//1.指针初始化
//2.小心指针越界
//3.指针指向空间释放及时置NULL
//4.避免返回局部变量的地址
//5.指针使用之前检查有效性{if(p != NULL)}


//4. 指针运算
//指针 + - 整数
//指针 - 指针
//指针的关系运算(指针比较大小)
// 标准规定：
//允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，但是不允许
//与指向第一个元素之前的那个内存位置的指针进行比较。
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int* pend = arr + 9;
//	while (p<=pend)
//	{
//		printf("%d\n", *p);
//		p++;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);
//	//指针和指针相减的前提是:
//	//两个指针指相同一个空间
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str!='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int my_strlen(char* str)
//{
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;//指针和指针相减
//}
//int main()
//{
//	int len = my_strlen("abc");
//	printf("%d\n", len);
//	return;
//}


////5. 指针和数组
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr; //指针存放数组首元素的地址
//	int i = 0;
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%p <==> %p\n", &arr[i], p + i);
//		*(p + i) = i;
//	}
//	for ( i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	printf("%d\n", 2[arr]);
//	printf("%d\n", arr[2]);
//	printf("%d\n", p[2]);
//	//arr[2] --> *(arr+2) --> *(2+arr) --> 2[arr]
//	//arr[2] <--> *(arr+2) <--> *(p+2) <--> *(2+p) <--> *(2+arr) == 2[arr]
//	return 0;
//}//C语言是很灵活的


//6. 二级指针
//int main()
//{
//	int a = 0;
//	int* pa = &a;//pa是指针变量,一级指针
//	int* *ppa = &pa;//pa也是个变量,&pa取出pa在内存中的起始地址
//	//第二颗* 表示ppa是指针
//	//ppa就是二级指针变量
//	return 0;
//}


//7. 指针数组
//int main()
//{
//	int arr[10];//整形数组
//	char ch[5];//字符数组
//	int* parr[5];//指针数组
//	return 0;
//}
//指针数组是指针还是数组？
//是数组。是存放指针的数组