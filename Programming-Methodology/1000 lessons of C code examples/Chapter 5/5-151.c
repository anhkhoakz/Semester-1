/*Chương 5 - Bài 151 - trang 60*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int KT_SoNguyenTo(int n);
int NguyenToLonNhat(int a[], int n);

int main()
{
	const int n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = NguyenToLonNhat(a, n);
	if (d == 0)
	{
		printf("Khong co so nguyen to trong array a. \n");
	}
	else
	{
		printf("So nguyen to lon nhat trong array a: %d \n", d);
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
	if (n < 2)
	{
		return 0;
	}
	else
	{
		if (n == 2)
		{
			return 1;
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
			if (n == d)
				return 1;
			else
				return 0;
		}
	}
}

int NguyenToLonNhat(int a[], int n)
{
	int count = 0;
	int nguyenToMax;
	for (int i = 0; i < n; ++i)
	{
		if (KT_SoNguyenTo(a[i]))
		{
			++count;
		}
	}
	if (count == 0)
	{ // Không có số nguyên tố trong array
		return 0;
	}
	else
	{
		const int m = count;
		int arrayNguyenTo[m];
		int j = 0;
		for (int i = 0; i < n; ++i)
		{
			if (KT_SoNguyenTo(a[i]))
			{
				arrayNguyenTo[j] = a[i];
				++j;
			}
		}
		nguyenToMax = arrayNguyenTo[0];
		for (int i = 0; i < m; ++i)
		{
			if (nguyenToMax < arrayNguyenTo[i])
				nguyenToMax = arrayNguyenTo[i];
		}
		return nguyenToMax;
	}
}
