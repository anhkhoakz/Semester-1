/*Chương 1 - Bài 21 - trang 6*/

#include <stdio.h>

void ListDivisor(int n); // Hàm liệt kê các ước số của n
int Func21(int n);

int main()
{
	int n = 100;

	ListDivisor(n);
	printf("\n");
	printf("Tong uoc so cua n la: %d \n", Func21(n));
}

void ListDivisor(int n)
{
	printf("Uoc so cua n la: ");
	for (int i = 0; i < n; ++i)
	{
		if (n % (i + 1) == 0)
		{
			printf("%d ", i + 1);
		}
	}
}

int Func21(int n)
{
	int s = 0;
	for (int i = 0; i < n; ++i)
	{
		if (n % (i + 1) == 0)
		{
			s += i + 1;
		}
	}
	return s;
}
