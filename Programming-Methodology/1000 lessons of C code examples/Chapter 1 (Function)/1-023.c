/*Chương 1 - Bài 23 - trang 6*/

#include <stdio.h>

void ListDivisor(int n); // Hàm liệt kê các ước số của n
int Func23(int n);

int main()
{
	int n = 100;
	int count = 0;

	ListDivisor(n);
	count = Func23(n);
	printf("\n");
	printf("So cac uoc so cua n la: %d \n", count);
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

int Func23(int n)
{
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (n % (i + 1) == 0)
		{
			++count;
		}
	}
	return count;
}
