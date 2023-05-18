/*Chương 1 - Bài 24 - trang 6*/

#include <stdio.h>

void ListDivisor(int n); // Hàm liệt kê các ước số của n
void Func24(int n);

int main()
{
	int n = 99;

	ListDivisor(n);
	printf("\n");
	Func24(n);
}

void ListDivisor(int n)
{
	printf("Uoc so cua %d la: ", n);
	for (int i = 0; i < n; ++i)
	{
		if (n % (i + 1) == 0)
		{
			printf("%d ", i + 1);
		}
	}
}

void Func24(int n)
{
	printf("Uoc so le cua %d la: ", n);
	for (int i = 0; i < n; ++i)
	{
		if (n % (i + 1) == 0 && (i + 1) % 2 != 0)
		{
			printf("%d ", i + 1);
		}
	}
}
