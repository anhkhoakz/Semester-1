/*Chương 5 - Bài 138 - trang 58*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int ViTriChanDau(int a[], int n);

int main()
{
	int const n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = ViTriChanDau(a, n);
	if (d == -1)
	{
		printf("Khong co gia tri chan trong array a. \n");
	}
	else
	{
		printf("Vi tri gia tri chan dau tien: a[%d] = %d \n", d, a[d]);
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

int ViTriChanDau(int a[], int n)
{
	int pos = -1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			pos = i;
			break;
		}
	}
	if (pos == -1)
	{
		return -1;
	}
	else
	{
		return pos;
	}
}
