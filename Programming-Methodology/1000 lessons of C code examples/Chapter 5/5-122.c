/*Chương 5 - Bài 122 - trang 54*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InputArray(int a[], int n);
void DisplayArray(int a[], int n);
int Max(int a[], int n);
int Min(int a[], int n);

int main()
{
	int const n = 10;
	int a[n];
	int max = 0;
	int min = 0;

	InputArray(a, n);
	DisplayArray(a, n);

	max = Max(a, n);
	min = Min(a, n);

	printf("Gia tri lon nhat cua array a: %d \n", max);
	printf("Gia tri nho nhat cua array a: %d \n", min);
}

void InputArray(int a[], int n)
{
	int min = 0;
	int max = 100;
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		a[i] = min + rand() % (max - min + 1);
	}
}

void DisplayArray(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}

int Max(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}

int Min(int a[], int n)
{
	int min = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}
	return min;
}
