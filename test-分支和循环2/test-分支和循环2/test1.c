#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//�ػ�����
int main()
{
	char input[20] = { 0 };
	//shutdown -s -t 60
	//system()-ִ��ϵͳ�����
	system("shutdown -s -t 60");
//again:
	//printf("��ע�⣬���ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n������:");
	//scanf("%s", input);
	//if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp����
	//{
	//	system("shutdown -a");
	//}
	while (1)
	{
		printf("��ע�⣬���ĵ��Խ���1�����ڹػ���������룺��������ȡ���ػ�\n������:");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)//�Ƚ������ַ���-strcmp����
		{
			system("shutdown -a");
		}
	}
	//else
	//{
	//	goto again;
	//}
	return 0;
}

////goto���
//int main()
//{
//	again:
//	printf("hello\n");
//	goto again;
//	printf("���\n");
//again:
//	printf("hehe\n");
//	return 0;
//}
//goto������ó���
//for (...)
//{
//	for (...)
//	{
//		for (...)
//		{
//			if (disaster)
//				goto error
//		}
//	}
//}


////do-while���
//int main()
//{
//	int i = 1;
//	do
//	{
//		//if (i == 5)
//			//continue;
//		    //break;
//		printf("%d", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}


////for ����
//
//int x, y;
//for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//{
//	printf("hehe\n");
//}
//
//	for (;;)
//	{
//		printf("hehe\n");
//	}


////for���
//int main()
//{
//	int i = 0;
//	  //��ʼ��  �ж�   ����
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//continue;
//			//break;//����ѭ��
//		printf("%d", i);
//	}
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'8')
//			continue;
//	    putchar (ch);
//	}
//	return 0;
//}
////
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char  password[20] = { 0 };
//	printf("����������:");
//	scanf("%s", password);
//	//��������ʣһ����\n��
//	//��ȡһ�¡�\n��
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ�Y/N):>");
//	ret = getchar();
//	if (ret=='Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//  }