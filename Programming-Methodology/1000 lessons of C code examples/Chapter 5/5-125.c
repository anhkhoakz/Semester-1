/*Chương 5 - Bài 125 - trang 55*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void InputArray(int a[], int n);
void DisplayArray(int a[], int n);
_Bool KT_SoNguyenTo(int n);
int Func125(int a[], int n);

int main()
{
	int const n = 10;
	int a[n];

	InputArray(a, n);
	DisplayArray(a, n);

	printf("Co %d so nguyen to nho hon 100. \n", Func125(a, n));
}

void InputArray(int a[], int n)
{
	int min = 0;
	int max = 200;
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		a[i] = min + rand() % (max - min + 1);
		if (rand() % 2 == 0)
		{ // Nhập random a[i] sẽ lá số nguyên tố
			while (KT_SoNguyenTo(a[i]) == false)
			{
				a[i] = min + rand() % (max - min + 1);
			}
		}
	}
}

void DisplayArray(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (i % 10 == 0)
			printf("\n");
		printf("%d\t", a[i]);
	}
	printf("\n");
}

_Bool KT_SoNguyenTo(int n)
{
	_Bool b = false;
	if (n < 2)
	{
		b = false;
	}
	else
	{
		if (n == 2)
		{
			b = true;
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
				b = true;
			else
				b = false;
		}
	}
	return b;
}

int Func125(int a[], int n)
{
	int count = 0;
	for (int i = 0; i < n; ++i)
	{
		if (KT_SoNguyenTo(a[i]) == true && a[i] < 100)
		{
			++count;
		}
	}
	return count;
}
