/*Chương 5 - Bài 137 - trang 58*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int ViTriNhoNhat(int a[], int n);

int main()
{
	int const n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = ViTriNhoNhat(a, n);
	printf("Vi tri nho nhat trong array a: a[%d] = %d \n", d, a[d]);
}

void ArrayInput(int a[], int n)
{
	signed int _min = 1;
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

int ViTriNhoNhat(int a[], int n)
{
	int minPos = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[minPos] > a[i])
		{
			minPos = i;
		}
	}
	return minPos;
}
