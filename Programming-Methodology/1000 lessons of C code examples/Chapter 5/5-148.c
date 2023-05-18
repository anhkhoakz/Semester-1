/*Chương 5 - Bài 148 - trang 60*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int KT_SoNguyenTo(int n);
int NguyenToCuoi(int a[], int n);

int main()
{
	const int n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = NguyenToCuoi(a, n);
	if (d == -1)
	{
		printf("Khong co so nguyen to trong array a. \n");
	}
	else
	{
		printf("So nguyen to cuoi cung trong array a: %d \n", d);
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

int KT_SoNguyenTo(int n)
{
	int _bool = 0;
	if (n < 2)
	{
		_bool = 0;
	}
	else
	{
		if (n == 2)
		{
			_bool = 1;
		}
		else
		{
			int d = 3;
			while (d <= n)
			{
				if (n % d == 0)
					break;
				d = d + 2;
			}
			if (d == n)
				_bool = 1;
			else
				_bool = 0;
		}
	}
	return _bool;
}

int NguyenToCuoi(int a[], int n)
{
	int _bool = -1;
	for (int i = n - 1; i > 0; --i)
	{
		if (KT_SoNguyenTo(a[i]))
		{
			return a[i];
		}
	}
	return _bool;
}
