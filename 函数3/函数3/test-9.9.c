#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//函数递归(recursion) - 算法
// 1.限制条件
// 2.递归调用后接近限制条件
// 3.递归层次不能太深

//int main()
//{
//	printf("hehe\n");
//	main();//死递归-栈溢出
//	return 0;
//}

////接收一个整型值(无符号)，按照顺序打印它的每一位。例: 输入:1234 ,输出 1 2 3 4.
//void print(unsigned int n)//把大事化小
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
//	//递归 - 函数自己调用自己
//	print(num);//要求:print函数可以打印参数部分数字的每一位
//	return 0;
//}

//内存                                        
// 
//栈区:   局部变量
//        函数形参
//
//堆区:   动态内存分配的
//        malloc/free,calloc,realloc
// 
//静态区: 全局变量
//        静态变量
//

//#include<string.h>
////编写函数不允许创建临时变量，求字符串长度
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+0=3    ——大事化小
//int my_strlen(char* str)
//{
//	if (*str != '\0')                 //假设str是10
//	    return 1 + my_strlen(str + 1);//传过去的是11，留下的是10;str+1:是下一个字符的地址
//	    //return 1 + my_strlen(str++);//先传再++，传的是原来的地址，留下的是+之后的值
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
//	//模拟实现一个strlen函数
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}

////迭代                           { n<=1  ,   1;
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
//	////循环是一种迭代
//	//for ( i = 1; i <=n; i++)
//	//{
//	//	ret = ret * i;
//	//}
//	//printf("%d\n", ret);
//	return 0;
//	//有些功能:可以迭代，也可以递归
//}


//求第n个斐波那契数。
//1 1 2 3 5 8 13 21 34 55 ...
//递归可以求解，但效率太低
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//计算第3个斐波那契数的计算次数
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);//效率太低
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

//递归经典问题
//1.汉诺塔问题
//2.青蛙跳台阶:一次跳1-2个台阶
//             n个台阶有多少种跳法


