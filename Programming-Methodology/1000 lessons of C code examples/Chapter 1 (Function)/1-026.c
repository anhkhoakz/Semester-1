/*Chương 1 - Bài 26 - trang 6*/

#include <stdio.h>

void ListDivisor(int n);	// Hàm liệt kê các ước số của n
void ListOddDivisor(int n); // Hàm liệt kê các ước số lẽ của n
int Func26(int n);

int main()
{
	int n = 100;

	ListDivisor(n);
	printf("\n");
	ListOddDivisor(n);
	printf("\n");
	printf("Tich cac uoc so le cua %d la: %d \n", n, Func26(n));
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

void ListOddDivisor(int n)
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

int Func26(int n)
{
	int s = 1;
	for (int i = 0; i < n; ++i)
	{
		if (n % (i + 1) == 0 && (i + 1) % 2 != 0)
		{
			s *= (i + 1);
		}
	}
	return s;
}
