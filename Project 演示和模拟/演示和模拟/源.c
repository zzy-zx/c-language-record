#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	char passward[20] = { 0 };
	for ( i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", passward);
		if (strcmp(passward,"123456")==0)// == ���������Ƚ������ַ����Ƿ����,Ӧ����һ���⺯��-strcmp
		{
			printf("����ɹ�\n");
			break;
		}
		else
		{
			printf("�������\n");
		}
	}
	if (i==3)
	{
		printf("��������������˻�������\n");
	}
	return 0;
}


////��ʾ����ַ��������ƶ������м��ۡ�
//int main()
//{
//	//char arr[]="abc"
//	//     [a b c \0];Ԫ�ظ������ĸ�
//	//�±���0 1 2 3 ��������4-2
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	char arr1[] = "welcome to my world!!!";
//	char arr2[] = "                      ";
//	int left = 0;//���±�
//	int right = strlen(arr1) - 1;//���±ꣻ//strlen������'\0'
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(200);//����
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}