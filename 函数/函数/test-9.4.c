#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//����
//ret_type[��������] fun_name[������](paral[��������], *)
//{
//	statement;//�����;//������:�������Ǻ�����ʵ��
//}

//дһ������������������

//void:����ú���û�з���ֵ
void Swap1(int x, int y)//Swap1--��ֵ����
{   //swap1�ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�β���ʵ�ε�һ����ʱ����
	//so���ı��ββ��ܸı�ʵ��
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;
}
//��������
void Swap2(int* pa, int* pb)//��ʽ����-�β�;Swap2--��ַ����
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}


int main()
{
	int a = 10;
	int b = 20;
	printf("����ǰ��a=%d b=%d\n", a, b);
	//Swap1(a, b);//swap-����
	//��������
	Swap2(&a, &b);//ʵ�ʲ���-ʵ��
	printf("������a=%d b=%d\n", a, b);
	return 0;
}

////��ϰָ��
//int main()
//{
//	int a = 0;
//	int* pa = &a;//paָ�����
//	*pa = 20;//�����ò���
//	printf("%d\n", a);
//	return 0;
//}

////дһ�������ҳ��������е����ֵ
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d",&a,&b);
//	int max=get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}

//int Add(int x, int y)//int��ʾ����һ������ֵ
//{
//	int z = 0;
//	z = x + y;
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//strcpy - string copy-�ַ�������
//char * strcpy(char * destination, const char * source);
//strlen - string lrngth-�ַ��������й�
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "###########";
//	              //"bit\0#######"����\0��������
//	strcpy(arr2, arr1);//strcpy(Ŀ�ĵأ�source)
//	printf("%s\n", arr2);
//	return 0;
//}
////memset
////memory(�ڴ�) set(����)
////void * memset ( void * ptr, int value, size_t num );
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}

