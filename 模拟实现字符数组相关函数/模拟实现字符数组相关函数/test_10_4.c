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

#include<assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(src !=NULL);//����(Ϊ�����£�Ϊ�ٱ���)
//	assert(dest != NULL);
//	while (*dest++ = *src++)//�ȿ�����'\0',��ʹ��ѭ��ֹͣ
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


//����const
int main()
{
	//1.
	//int num = 10;
	//int* p = &num;
	//*p = 20;
	//printf("%d\n", num);

	//2.
	//const ���α���,��������ͳ�Ϊ������,���ܱ��޸�,�����ʻ��Ǳ���
	const int num = 10;
	//const����ָ�����ʱ
	const int* p = &num;
	//const �����*�����,���ε���*p����ʾָ��ָ�������,�ǲ���ͨ��ָ��ı��
	//      ����ָ����������ǿ����޸ĵ�
	//* p = 20;
	int* const p = &num;
	//const �����*���ұ�,���ε���ָ�����p����ʾָ��������ܱ��ı�
	//      ����ָ��ָ��������ǿ��Ըı��
	//p = &n;
	printf("%d\n", num);
	return 0;
}

