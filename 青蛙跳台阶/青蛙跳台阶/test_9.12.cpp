#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//������̨��
//һֻ����һ�ο�������1��̨��, Ҳ��������2����
//�����������һ��n����̨���ܹ��ж���������?(�Ⱥ����ͬ�㲻ͬ�Ľ��)��
int c = 0;
int Qwt(int n)
{
	int a = 1;
	int b = 2;
	if (n == 1)
		c = 1;
	if (n == 2)
		c = 2;
	else
	{
		while (n > 2)
		{
			c = a + b;
			a = b;
			b = c;
			n--;
		}
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Qwt(n);
	printf("%d\n", ret);
	return 0;
}

//һֻ����һ�ο�������1��̨�ף�Ҳ��������2��������Ҳ��������n����
//�����������һ��n����̨���ܹ��ж�����������
