/*Chương 5 - Bài 123 - trang 54*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InputArray(int a[], int n);
void DisplayArray(int a[], int n);
int Min(int a[], int n);
int MinPosition(int a[], int n, int min);

int main()
{
	int const n = 20;
	int a[n];
	int min = 0;
	int minPos = -1;

	InputArray(a, n);
	DisplayArray(a, n);

	min = Min(a, n);
	printf("Gia tri nho nhat cua array a: %d \n", min);

	minPos = MinPosition(a, n, min);
	if (minPos != -1)
	{
		printf("Gia tri nho nhat tai vi tri: %d \n", minPos);
	}
	else
	{
		printf("Khong tim thay! \n");
	}
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

int MinPosition(int a[], int n, int min)
{
	int pos = -1;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == min)
		{
			return i;
		}
	}
	return pos;
}
