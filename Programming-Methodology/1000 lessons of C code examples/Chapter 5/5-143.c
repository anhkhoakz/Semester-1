/*Chương 5 - Bài 143 - trang 59*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int ChanDau(int a[], int n);

int main()
{
	const int n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = ChanDau(a, n);
	if (d == -1)
	{
		printf("Khong co gia tri chan trong array a. \n");
	}
	else
	{
		printf("Gia tri chan dau tien trong array a: %d \n", d);
	}
}

void ArrayInput(int a[], int n)
{
	int min = 1;
	int max = 100;
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		a[i] = min + rand() % (max - min + 1);
	}
}

void ArrayDisplay(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
}

int ChanDau(int a[], int n)
{
	int _bool = -1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			return a[i];
		}
	}
	return _bool;
}
