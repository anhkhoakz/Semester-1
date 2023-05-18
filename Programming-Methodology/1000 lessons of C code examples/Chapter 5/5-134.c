/*Chương 5 - Bài 134 - trang 58*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int LonNhat(int a[], int n);

int main()
{
	int const n = 10;
	int a[n];

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	printf("Gia tri lon nhat cua array a: %d \n", LonNhat(a, n));
}

void ArrayInput(int a[], int n)
{
	signed int _min = -50;
	signed int _max = 100;
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

int LonNhat(int a[], int n)
{
	int _max = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (_max < a[i])
		{
			_max = a[i];
		}
	}
	return _max;
}
