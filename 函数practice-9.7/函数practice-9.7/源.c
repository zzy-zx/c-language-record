#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>


//һ�����������д�������ͣ�Ĭ�Ϸ���int����
////дһ�������ж�100-200֮�������
//int is_prime(int n)
//{
//	//2->n-1 ֮�����
//	int j = 0;
//	for (j = 2; j < n; j++)//j<=sqrt(n)��ƽ��
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//100-200֮�������
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}



//int is_leap_year(int x)
////�����귵��1�����Ƿ���0
////�ж�year�Ƿ�Ϊ����
////1.�ܱ�4�������Ҳ��ܱ�100����������
////2.�ܱ�400����������
//{
//	//return (x % 4 == 0 && x % 100 != 0 || x % 400 == 0);(ֱ�ӷ��ش�ʽ)
//
//	if (x % 4 == 0 && x % 100 != 0)//&&:����  ||:���� 
//	{
//		return 1;
//	}
//	else if(x % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int count = 0;
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}



//int binary_search(int arr[],int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;//�Ҳ�����
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//�ҵ��˾ͷ����ҵ�λ�õ��±�
//	//�Ҳ�������-1
//	int ret = binary_search(arr,key,sz);//���鴫�Σ�ʵ�ʴ��ݵĲ�������ı���
//	if (-1 == ret)                      //��������ȥ��������Ԫ�صĵ�ַ
//	{
//		printf("�Ҳ�����\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±���%d\n",ret);
//	}
//	return 0;
//}



//void Add(int* p)
//{
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);//��ַ
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//9.14 ��
//дһ��������ʵ�ֽ�����Ԫ�صߵ�
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = my_strlen(str)-1;
//	while (left<right)
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		right--;
//		left++;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//	printf("%s\n", arr);
//	return 0;
//}
//�ݹ�ķ���
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	char tmp = *str;//��1��
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//��2��.//len-1:f���±�
//	*(str + len - 1) = '\0';//��3��
//	//�ж�������
//	if (my_strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);//��4��
//	}
//	*(str + len - 1) = tmp;//��5��
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//������arr������arr��Ԫ�صĵ�ַ
//	printf("%s\n", arr);
//	return 0;
//}


////дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
////���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//int DigitSum(int n)
//{
//	if (n>9)
//	{
//		return DigitSum(n / 10) + n % 10;
//	}
//	else
//	{
//		return;
//	}
//}
//int main()
//{
//	int num = 1729;
//	int sum = DigitSum(num);
//	printf("%d\n", sum);
//	return 0;
//}

//��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
double Pow(int n, int k)
{
	if (k==0)
	{
		return 1.0;
	}
	else if (k > 0)
	{
		return n * Pow(n, k - 1);
	}
	else
		return 1.0 / (Pow(n, -k));
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	double ret = Pow(n, k);
	printf("%lf\n", ret);
	return 0;
}

