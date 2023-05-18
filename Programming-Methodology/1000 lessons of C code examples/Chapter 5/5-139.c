/*Chương 5 - Bài 139 - trang 58*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int ViTriHoanThienCuoiCung(int a[], int n);
int KT_SoHoanThien(int n);

int main()
{
	int const n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = ViTriHoanThienCuoiCung(a, n);
	if (d == -1)
	{
		printf("Khong co so hoan thien trong array a. \n");
	}
	else
	{
		printf("Vi tri so hoan thien cuoi cung: a[%d] = %d \n", d, a[d]);
	}
}

void ArrayInput(int a[], int n)
{
	signed int _min = 1;
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

int ViTriHoanThienCuoiCung(int a[], int n)
{
	int pos = -1;
	for (int i = n - 1; i > 0; --i)
	{
		if (KT_SoHoanThien(a[i]))
		{
			pos = i;
			break;
		}
	}
	return pos;
}

int KT_SoHoanThien(int n)
{
	int s = 0;
	for (int i = 1; i < n; ++i)
	{
		if (n % i == 0)
		{
			s = s + i;
		}
	}
	if (s == n)
		return 1;
	else
		return 0;
}
