/*Chương 1 - Bài 30 - trang 6*/

#include <stdio.h>

void ListDivisor(int n); // Hàm liệt kê số nguyên dương nhỏ hơn chính nó của n
int SumDivisor(int n);	 // Hàm tính tổng các ước số của n
int Func30(int n);

int main()
{
	int n = 496;

	ListDivisor(n);
	printf("\n");
	printf("Tong cac uoc so cua %d la: %d \n", n, SumDivisor(n));
	if (Func30(n))
	{
		printf("%d la so hoan thien. \n", n);
	}
	else
	{
		printf("%d khong phai la so hoan thien. \n", n);
	}
}

void ListDivisor(int n)
{
	printf("Uoc so cua %d la: ", n);
	for (int i = 0; i < n / 2; ++i)
	{
		if (n % (i + 1) == 0)
		{
			printf("%d ", i + 1);
		}
	}
}

int SumDivisor(int n)
{
	int s = 0;
	for (int i = 0; i < n / 2; ++i)
	{
		if (n % (i + 1) == 0)
		{
			s += i + 1;
		}
	}
	return s;
}

int Func30(int n)
{
	int bool = 0;
	int s = 0;
	for (int i = 0; i < n / 2; ++i)
	{
		if (n % (i + 1) == 0)
		{
			s += (i + 1);
		}
	}
	if (s == n)
	{
		bool = 1;
	}
	return bool;
}
