#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

//���ֲ���
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
	int left = 0;//���±�
	int right = sz - 1;//���±�

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k) //arr[mid]:�������±�Ϊmid���������
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left>right)
	{
		printf("�Ҳ�����");
	}
	return 0;
}

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//дһ�����룬��arr���飨�������ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//
//}


////����Ļ�����9*9�˷��ھ���
////1*1=1
////2*1=2 2*2=4
////3*1=3 3*2=6 3*3=9
////.......
////9*1=9...
//int main()
//{
//	int i = 0;
//	//ȷ����ӡ9��
//	for ( i = 1; i <=9; i++)
//	{
//		//��ӡһ��
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);//%2d���Ҷ��룬%-2d�������
//		}
//		printf("\n");
//	}
//	return 0;
//}


////��10�����������ֵ
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int max = arr[0];//�������ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for ( i = 0; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


////�������
////����1/1-1/2+1/3-1/4......+1/99-1/100��ֵ����ӡ���
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for ( i = 1; i <=100; i++)
//	{
//		sum+=1.0 / i;
//		flag = -flag;//�
//	}
//	printf("%lf\n", sum);
//    return 0;
//}


//////����1-100�ڳ���9�ĸ���
////int main()
////{
////	int i= 0;
////	int count = 0;
////	for ( i = 1; i <=100; i++)
////	{
////		if (i % 10 == 9)
////			count++;
////		if (i / 10 == 9)
////			count++;
////	}
////	printf("count=%d\n", count);
////	return 0;
////}


////��ӡ100-200������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt-��ƽ������ѧ�⺯��
//	for ( i = 100; i <=200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1������
//		int j = 0;
//		for ( j = 2; j <=sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		//int j = 0;
//		//for ( j = 2; j < i; j++)
//		//{
//		//	if (i%j == 0)
//		//	{
//		//		break;
//		//	}
//		//}
//		//if (j == i)
//		//{
//		//	printf("%d ", i);
//		//	count++;
//		//}
//	}
//	printf("\ncount=%d\n ", count);
//	return 0;
//}//������n����


//
////��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for ( year = 1000; year <= 2000; year++)
//	{
//		////�ж�year�Ƿ�Ϊ����
//		////1.�ܱ�4�������Ҳ��ܱ�100����������
//		////2.�ܱ�400����������
//		//if (year%4==0 && year%100!=0)
//		//{
//		//	printf(" %d ", year);
//		//	count++;
//		//}
//		//else if (year % 400 == 0)
//		//{
//		//	printf(" %d ", year);
//		//	count++;
//		//}
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf(" %d ", year);
//			count++;
//		}
//	}
//	printf("\n count=%d\n",count);
//	return 0;
//}


////�������������������������Լ��
////շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)//����������0Ϊ������ѭ��
//	{
//		//r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


////��ӡ1-100֮��3�ı���������
//int main()
//{
//	int i = 0;
//	for ( i = 1; i <=100; i++)
//	{
//		if (i % 3 == 0)//i��3�������
//			printf("%d\n", i);
//	}
//	return 0;
//}
//


////Ҫ�󣺽��������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a,&b,&c);
//	//�㷨ʵ��
//	//a�з����ֵ
//	//b��֮
//	//c�з���Сֵ
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a<c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
