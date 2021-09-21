#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>


//一个函数如果不写返回类型，默认返回int类型
////写一个函数判断100-200之间的素数
//int is_prime(int n)
//{
//	//2->n-1 之间的数
//	int j = 0;
//	for (j = 2; j < n; j++)//j<=sqrt(n)开平方
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	//100-200之间的素数
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
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
////是闰年返回1；不是返回0
////判断year是否为闰年
////1.能被4整除并且不能被100整除是闰年
////2.能被400整除是闰年
//{
//	//return (x % 4 == 0 && x % 100 != 0 || x % 400 == 0);(直接返回此式)
//
//	if (x % 4 == 0 && x % 100 != 0)//&&:并且  ||:或者 
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
//	return -1;//找不到了
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回找到位置的下标
//	//找不到返回-1
//	int ret = binary_search(arr,key,sz);//数组传参，实际传递的不是数组的本身
//	if (-1 == ret)                      //仅仅传过去了数组首元素的地址
//	{
//		printf("找不到了\n");
//	}
//	else
//	{
//		printf("找到了,下标是%d\n",ret);
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
//	Add(&num);//传址
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}


//9.14 补
//写一个函数，实现将数组元素颠倒
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
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s\n", arr);
//	return 0;
//}
//递归的方法
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
//	char tmp = *str;//第1步
//	int len = my_strlen(str);
//	*str = *(str + len - 1);//第2步.//len-1:f的下标
//	*(str + len - 1) = '\0';//第3步
//	//判断条件！
//	if (my_strlen(str+1)>=2)
//	{
//		reverse_string(str + 1);//第4步
//	}
//	*(str + len - 1) = tmp;//第5步
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);//数组名arr是数组arr首元素的地址
//	printf("%s\n", arr);
//	return 0;
//}


////写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
////例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
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

//编写一个函数实现n^k，使用递归实现
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

