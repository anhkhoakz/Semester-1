/*Chương 5 - Bài 136 - trang 58*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int ChanCuoi(int a[], int n);

int main()
{
	int const n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = ChanCuoi(a, n);
	if (d > -1)
	{
		printf("Gia tri chan cuoi: %d \n", d);
	}
	else
	{
		printf("Khong ton tai gia tri chan trong array a. \n");
	}
}

void ArrayInput(int a[], int n)
{
	signed int _min = 1;
	signed int _max = 100;
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		a[i] = _min + rand() % (_max - _min + 1);
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

int ChanCuoi(int a[], int n)
{
	int chanCuoi = -1;
	for (int i = n - 1; i > 0; --i)
	{
		if (a[i] % 2 == 0)
		{
			chanCuoi = a[i];
			break;
		}
	}
	if (chanCuoi > -1)
		return chanCuoi;
	else
		return -1;
}
