/*Chương 5 - Bài 135 - trang 58*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
signed int DuongDau(int a[], int n);

int main()
{
	int const n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = DuongDau(a, n);
	if (d > -1)
	{
		printf("Gia tri duong dau tien: %d \n", d);
	}
	else
	{
		printf("Khong ton tai gia tri duong trong array a. \n");
	}
}

void ArrayInput(int a[], int n)
{
	signed int _min = -100;
	signed int _max = 10;
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

signed int DuongDau(int a[], int n)
{
	int _bool = -1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > -1)
		{
			_bool = a[i];
			break;
		}
	}
	if (_bool > -1)
		return _bool;
	else
		return -1;
}
