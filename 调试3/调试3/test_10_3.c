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
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;
//}
void my_strcpy(char* dest, char* src)
{
	while (*dest++ = *src++)//既拷贝了'\0',又使得循环停止
	{
		;
	}
}
int main()
{
	char arr1[20] = "xxxxxxxxxxxxx";
	char arr2[] = "hello";
	my_strcpy(arr1, arr2);
	//strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;

}