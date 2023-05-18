/*Chương 1 - Bài 28 - trang 6*/

#include <stdio.h>

void ListDivisor(int n);	// Hàm liệt kê các ước số của n nhỏ hơn chính nó
void ListOddDivisor(int n); // Hàm liệt kê các ước số lẻ của n
int Func28(int n);

int main()
{
	int n = 99;

	ListDivisor(n);
	printf("\n");
	ListOddDivisor(n);
	printf("\n");
	printf("Uoc so le lon nhat cua %d la: %d\n", n, Func28(n));
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

void ListOddDivisor(int n)
{
	printf("Uoc so le cua %d la: ", n);
	for (int i = 0; i < n / 2; ++i)
	{
		if (n % (i + 1) == 0 && (i + 1) % 2 != 0)
		{
			printf("%d ", i + 1);
		}
	}
}

int Func28(int n)
{
	int max = 0;
	for (int i = 0; i < n / 2; ++i)
	{
		if (n % (i + 1) == 0 && (i + 1) % 2 != 0)
		{
			if (max < i + 1)
			{
				max = i + 1;
			}
		}
	}
	return max;
}
