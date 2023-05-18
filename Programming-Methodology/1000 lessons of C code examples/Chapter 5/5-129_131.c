/*Chương 5 - Bài 129 & 131 - trang 57*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);

int main()
{
	int const n = 10;
	int a[10];

	ArrayInput(a, n);
	ArrayDisplay(a, n);
}

void ArrayInput(int a[], int n)
{
	int _min = 0;
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
}
