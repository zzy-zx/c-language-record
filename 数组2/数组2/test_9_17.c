#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//二维数组

//int main()
//{
//	////1.二维数组的创建
//	//int arr[3][4];//3行4列
//	//char ch[3][10];//3行10列
//	////2.二维数组的初始化
//	//int arr[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	//int arr[3][4] = { 1,2,3,4,5,6,7 };//不完全初始化 - 后面补0
//	//int arr[3][4] = { {1,2},{3,4},{5,6} };
//	//int arr[][4] = { {1,2},{3,4},{5,6} };//行可以省略，列不行
//	//二维数组的使用
//	//int arr[][4] = { {1,2},{3,4},{5,6} };
//	//int i = 0;
//	//int j = 0;
//	//for ( i = 0; i < 3; i++)
//	//{
//	//	for ( j = 0; j < 4; j++)
//	//	{
//	//		printf("%d ", arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//    //二维数组的存储
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	int i = 0;
//	int j = 0;
//	int* p = &arr[0][0];
//	for ( i = 0; i < 12; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//for (i = 0; i < 3; i++)
//	//{
//	//	for (j = 0; j < 4; j++)
//	//	{
//	//		printf("&arr[%d][%d] = %p\n ", i, j, arr[i][j]);
//	//	}
//	//	printf("\n");
//	//}
//	//二维数组在内存中也是连续存储的。
//	return 0;
//}

//数组作为函数参数
//冒泡排序的思想:两两比较，交换
void bubble_sort(int arr[],int sz)//形参arr本质是指针
{
	//int sz = sizeof(arr) / sizeof(arr[0]);//此处出现问题
	//确定趟数
	int i = 0;
	for ( i = 0; i < sz; i++)
	{
		//一趟冒泡排序的过程
		int j = 0;
		int flag = 1;//优化
		for ( j = 0; j < sz-1-i; j++)
		{
			if (arr[j]>arr[j+1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;
			}
			if (flag==1)
			{
				break;
			}
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//排序为升序
	//计算元素个数
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//数组传参，实际上只是把数组的首元素的地址传递过去
	return 0;
}
//数组名是首元素地址,如下
// 但是有2个例外
// 1.sizeof(数组名) - 数组名表示整个数组 - 计算的是整个数组的大小,单位是字节
// 2.&数组名 - 数组名表示整个数组 - 取出的是整个数组的地址
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr);
//    printf("%d\n", sz);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", arr);
//	return 0;
//}