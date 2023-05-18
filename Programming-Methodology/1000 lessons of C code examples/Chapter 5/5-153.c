/*Chương 5 - Bài 153 - trang 60*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int ChanNhoNhat(int a[], int n);

int main()
{
	const int n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = ChanNhoNhat(a, n);
	if (d == -1)
	{
		printf("Khong co so chan trong array a. \n");
	}
	else
	{
		printf("So chan nho nhat trong array a: %d \n", d);
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

int ChanNhoNhat(int a[], int n)
{
	int count = 0;
	int minEven;
	int i = 0;

	for (i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			++count;
			minEven = a[i];
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
			if (a[i] % 2 == 0 && minEven > a[i])
				minEven = a[i];
		}
		return minEven;
	}
}
