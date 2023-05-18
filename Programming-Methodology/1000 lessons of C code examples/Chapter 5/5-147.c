/*Chương 5 - Bài 147 - trang 59*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int DuongCuoi(int a[], int n);

int main()
{
	const int n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = DuongCuoi(a, n);
	if (d == -1)
	{
		printf("Khong co so duong trong array a. \n");
	}
	else
	{
		printf("So duong cuoi cung trong array a: %d \n", d);
	}
}

void ArrayInput(int a[], int n)
{
	int min = -50;
	int max = 20;
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

int DuongCuoi(int a[], int n)
{
	int _bool = -1;
	for (int i = n - 1; i > 0; --i)
	{
		if (a[i] > 0)
		{
			return a[i];
		}
	}
	return _bool;
}
