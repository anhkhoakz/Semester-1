/*Chương 5 - Bài 123 - trang 54*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void InputArray(int a[], int n);
void DisplayArray(int a[], int n);
int MinPosition(int a[], int n);

int main()
{
	int const n = 20;
	int a[n];
	int minPos = -1;

	InputArray(a, n);
	DisplayArray(a, n);

	minPos = MinPosition(a, n);
	printf("Gia tri nho nhat tai vi tri: %d \n", minPos);
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

int MinPosition(int a[], int n)
{
	int pos = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[pos] > a[i])
		{
			pos = i;
		}
	}
	return pos;
}
