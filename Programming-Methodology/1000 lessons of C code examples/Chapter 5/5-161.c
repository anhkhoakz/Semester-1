/*Chương 5 - Bài 161 - trang 62*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int DauTienTrongDoan(int a[], int n, int x, int y);

int main()
{
	const int n = 10;
	int a[n];
	int x = 10, y = 20;
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = DauTienTrongDoan(a, n, x, y);
	if (d == x)
	{
		printf("Khong tim thay gia tri nam trong doan [%d, %d]. \n", x, y);
	}
	else
	{
		printf("Gia tri dau tien nam trong doan [%d, %d] la: %d \n", x, y, d);
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

int DauTienTrongDoan(int a[], int n, int x, int y)
{
	int count = 0;
	int i;
	int x1, y1;

	if (x > y)
	{
		x1 = y;
		y1 = x;
	}
	else
	{
		x1 = x;
		y1 = y;
	}

	for (i = 0; i < n; ++i)
	{
		if (a[i] > x1 && a[i] < y1)
		{
			++count;
			break;
		}
	}
	if (count == 0)
		return x;
	else
		return a[i];
}
