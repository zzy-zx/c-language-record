#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�����ݹ�(recursion) - �㷨
// 1.��������
// 2.�ݹ���ú�ӽ���������
// 3.�ݹ��β���̫��

//int main()
//{
//	printf("hehe\n");
//	main();//���ݹ�-ջ���
//	return 0;
//}

////����һ������ֵ(�޷���)������˳���ӡ����ÿһλ����: ����:1234 ,��� 1 2 3 4.
//void print(unsigned int n)//�Ѵ��»�С
//{
//	if (n>9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	//�ݹ� - �����Լ������Լ�
//	print(num);//Ҫ��:print�������Դ�ӡ�����������ֵ�ÿһλ
//	return 0;
//}

//�ڴ�                                        
// 
//ջ��:   �ֲ�����
//        �����β�
//
//����:   ��̬�ڴ�����
//        malloc/free,calloc,realloc
// 
//��̬��: ȫ�ֱ���
//        ��̬����
//

//#include<string.h>
////��д��������������ʱ���������ַ�������
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+0=3    �������»�С
//int my_strlen(char* str)
//{
//	if (*str != '\0')                 //����str��10
//	    return 1 + my_strlen(str + 1);//����ȥ����11�����µ���10;str+1:����һ���ַ��ĵ�ַ
//	    //return 1 + my_strlen(str++);//�ȴ���++��������ԭ���ĵ�ַ�����µ���+֮���ֵ
//	else
//		return 0;
//
//	/*int count = 0;
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;*/
//}
//int main()
//{
//	char arr[] = "bit";
//	//['b']['i']['t']['\n']
//	//ģ��ʵ��һ��strlen����
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

////����                           { n<=1  ,   1;
////n!                     Fac(n)
////1*2*3*4*....n                  { n>1   ,   n*Fac(n-1);
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac(n - 1);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	//int ret = 0;
//	//int i = 0;
//	////ѭ����һ�ֵ���
//	//for ( i = 1; i <=n; i++)
//	//{
//	//	ret = ret * i;
//	//}
//	//printf("%d\n", ret);
//	return 0;
//	//��Щ����:���Ե�����Ҳ���Եݹ�
//}


//���n��쳲���������
//1 1 2 3 5 8 13 21 34 55 ...
//�ݹ������⣬��Ч��̫��
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//�����3��쳲��������ļ������
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);//Ч��̫��
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count=%d\n", count);
//	return 0;
//}

int Fib(int n)
{   //1 1 3 5 8 13 21 34 ...
    //a b c ...  c=a+b
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;
}

//�ݹ龭������
//1.��ŵ������
//2.������̨��:һ����1-2��̨��
//             n��̨���ж���������


