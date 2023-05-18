/*Chương 5 - Bài 127 - trang 56*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void InputArray(int a[], int n);
void DisplayArray(int a[], int n);
void BubleSort(int a[], int n);
void Swap(int *a, int *b);

int main()
{
	int const n = 10;
	int a[n];

	InputArray(a, n);
	DisplayArray(a, n);

	BubleSort(a, n);
	printf("Array sort. \n");
	DisplayArray(a, n);
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
		printf("%d\t", a[i]);
	}
	printf("\n");
}

void Swap(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}

void BubleSort(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = n - 1; j > i; --j)
		{
			if (a[j] < a[j - 1])
			{
				Swap(a + j, a + j - 1);
			}
		}
	}
}
