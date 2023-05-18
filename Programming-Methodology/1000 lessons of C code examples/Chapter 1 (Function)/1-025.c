/*Chương 1 - Bài 25 - trang 6*/

#include <stdio.h>

void ListDivisor(int n);	 // Hàm liệt kê các ước số của n
void ListEvenDivisor(int n); // Hàm liệt kê các ước số chẵn của n
int Func25(int n);

int main()
{
	int n = 100;

	ListDivisor(n);
	printf("\n");
	ListEvenDivisor(n);
	printf("\n");
	printf("Tong cac uoc so chan cua %d la: %d \n", n, Func25(n));
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

void ListEvenDivisor(int n)
{
	printf("Uoc so chan cua %d la: ", n);
	for (int i = 0; i < n; ++i)
	{
		if (n % (i + 1) == 0 && (i + 1) % 2 == 0)
		{
			printf("%d ", i + 1);
		}
	}
}

int Func25(int n)
{
	int s = 0;
	for (int i = 0; i < n; ++i)
	{
		if (n % (i + 1) == 0 && (i + 1) % 2 == 0)
		{
			s += i + 1;
		}
	}
	return s;
}
