/*Chương 5 - Bài 154 - trang 60*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int VT_AmLonNhat(int a[], int n);

int main()
{
	const int n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = VT_AmLonNhat(a, n);
	if (d == -1)
	{
		printf("Khong co so am trong array a. \n");
	}
	else
	{
		printf("So am lon nhat trong array a: %d \n", d);
	}
}

void ArrayInput(int a[], int n)
{
	int min = -100;
	int max = 50;
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

int VT_AmLonNhat(int a[], int n)
{
	int count = 0;
	int maxNeg;
	int i = 0;

	for (i = 0; i < n; ++i)
	{
		if (a[i] < 0)
		{
			++count;
			maxNeg = a[i];
			break;
		}
	}

	if (count == 0)
	{
		return -1;
	}
	else
	{
		for (i = i + 1; i < n; ++i)
		{
			if (a[i] < 0 && maxNeg < a[i])
				maxNeg = a[i];
		}
		return maxNeg;
	}
}
