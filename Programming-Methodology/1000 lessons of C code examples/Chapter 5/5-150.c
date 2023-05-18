/*Chương 5 - Bài 150 - trang 60*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int AmLonNhat(int a[], int n);

int main()
{
	const int n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = AmLonNhat(a, n);
	if (d == 0)
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
	int min = -50;
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

int AmLonNhat(int a[], int n)
{
	signed int min = a[0];
	signed int maxNegative;
	for (int i = 0; i < n; ++i)
	{
		if (min > a[i])
			min = a[i];
	}
	if (min > 0)
	{ // Không có giá trị âm trong array
		return 0;
	}
	else
	{
		maxNegative = min;
		for (int i = 0; i < n; ++i)
		{
			if (a[i] < 0 && maxNegative < a[i])
				maxNegative = a[i];
		}
		return maxNegative;
	}
}
