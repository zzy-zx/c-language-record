#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


struct Book
{
	char name [20];
	short price;
};

int main()
{
	struct Book b1 = { "C����", 30 };
	struct Book* pd = &b1;
	printf("������%s\n",pd->name);
	printf("�۸�%d\n",pd->price);

	printf("������%s\n", (*pd).name);
	printf("�۸�%d\n", (*pd).price);

	printf("������%s\n", b1.name);
	printf("�۸�%d\n", b1.price);
	return 0;
}