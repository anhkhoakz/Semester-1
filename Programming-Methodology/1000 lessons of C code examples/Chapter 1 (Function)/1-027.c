/*Chương 1 - Bài 27 - trang 6*/

#include <stdio.h>

void ListDivisorLessN(int n); // Hàm liệt kê các ước số của n nhỏ hơn chính nó
int Func27(int n);

int main()
{
	int n = 100;

	ListDivisorLessN(n);
	printf("\n");
	printf("Tong cac uoc so nho hon chinh no cua %d la: %d \n", n, Func27(n));
}

void ListDivisorLessN(int n)
{
	printf("Uoc so nho hon chinh no cua %d la: ", n);
	for (int i = 0; i < n / 2; ++i)
	{
		if (n % (i + 1) == 0)
		{
			printf("%d ", i + 1);
		}
	}
}

int Func27(int n)
{
	int s = 0;
	for (int i = 0; i < n / 2; ++i)
	{
		if (n % (i + 1) == 0)
		{
			s += (i + 1);
		}
	}
	return s;
}
