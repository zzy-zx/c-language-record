#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ģ��ʵ�ֿ⺯����strcpy
//strcpy - �ַ�������
#include<string.h>
//����
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
	while (*dest++ = *src++)//�ȿ�����'\0',��ʹ��ѭ��ֹͣ
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