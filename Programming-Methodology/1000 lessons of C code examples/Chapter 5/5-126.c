/*Chương 5 - Bài 126 - trang 56*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void InputArray(int a[], int n);
void DisplayArray(int a[], int n);
int Func126(int a[], int n);

int main()
{
	int const n = 10;
	int a[n];

	InputArray(a, n);
	DisplayArray(a, n);

	printf("Tong so am trong array: %d \n", Func126(a, n));
}

void InputArray(int a[], int n)
{
	int min = -50;
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

int Func126(int a[], int n)
{
	int s = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < 0)
		{
			s = s + a[i];
		}
	}
	return s;
}
