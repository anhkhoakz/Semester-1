/*Chương 5 - Bài 142 - trang 59*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int NhoNhat(int a[], int n);

int main()
{
	const int n = 10;
	int a[n];

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	printf("Gia tri nho nhat: %d \n", NhoNhat(a, n));
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

int NhoNhat(int a[], int n)
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
