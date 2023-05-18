/*Chương 5 - Bài 152 - trang 60*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int KT_SoHoanThien(int n);
int HoanThienNhoNhat(int a[], int n);

int main()
{
	const int n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = HoanThienNhoNhat(a, n);
	if (d == 0)
	{
		printf("Khong co so hoan thien trong array a. \n");
	}
	else
	{
		printf("So hoan thien nho nhat trong array a: %d \n", d);
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

int KT_SoHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; ++i)
	{
		if (n % i == 0)
			s += i;
	}
	if (s == n)
		return 1;
	else
		return 0;
}

int HoanThienNhoNhat(int a[], int n)
{
	int count = 0;
	int hoanThienMin;
	for (int i = 0; i < n; ++i)
	{
		if (KT_SoHoanThien(a[i]))
		{
			++count;
		}
	}
	if (count == 0)
	{ // Không có số hoàn thiện trong array
		return 0;
	}
	else
	{
		const int m = count;
		int arrayHoanThien[m];
		int j = 0;
		for (int i = 0; i < n; ++i)
		{
			if (KT_SoHoanThien(a[i]))
			{
				arrayHoanThien[j] = a[i];
				++j;
			}
		}
		hoanThienMin = arrayHoanThien[0];
		for (int i = 0; i < m; ++i)
		{
			if (hoanThienMin > arrayHoanThien[i])
				hoanThienMin = arrayHoanThien[i];
		}
		return hoanThienMin;
	}
}
