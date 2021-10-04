#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
//模拟实现库函数：strcpy
//strcpy - 字符串拷贝
#include<string.h>
//不好
//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}

#include<assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src !=NULL);//断言(为真无事，为假报错)
//	assert(dest != NULL);
//	while (*dest++ = *src++)//既拷贝了'\0',又使得循环停止
//	{
//		;
//	}
//}
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	//strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//关于const
int main()
{
	//1.
	//int num = 10;
	//int* p = &num;
	//*p = 20;
	//printf("%d\n", num);

	//2.
	//const 修饰变量,这个变量就称为常变量,不能被修改,但本质还是变量
	const int num = 10;
	//const修饰指针变量时
	const int* p = &num;
	//const 如果在*的左边,修饰的是*p，表示指针指向的内容,是不能通过指针改变的
	//      但是指针变量本身是可以修改的
	//* p = 20;
	int* const p = &num;
	//const 如果在*的右边,修饰的是指针变量p，表示指针变量不能被改变
	//      但是指针指向的内容是可以改变的
	//p = &n;
	printf("%d\n", num);
	return 0;
}

