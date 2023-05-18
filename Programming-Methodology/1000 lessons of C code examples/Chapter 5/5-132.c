/*Chương 5 - Bài 132 - trang 57*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
void Func132(int a[], int n);

int main()
{
	int const n = 10;
	int a[n];

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	printf("Cac phan tu chan cua array a: \n");
	Func132(a, n);
}

void ArrayInput(int a[], int n)
{
	int _min = 1;
	int _max = 100;
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		a[i] = _min + rand() % (_max - _min + 1);
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

void Func132(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			printf("%d\t", a[i]);
		}
	}
}
