#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


struct Book
{
	char name [20];
	short price;
};

int main()
{
	struct Book b1 = { "C语言", 30 };
	struct Book* pd = &b1;
	printf("书名：%s\n",pd->name);
	printf("价格：%d\n",pd->price);

	printf("书名：%s\n", (*pd).name);
	printf("价格：%d\n", (*pd).price);

	printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	return 0;
}