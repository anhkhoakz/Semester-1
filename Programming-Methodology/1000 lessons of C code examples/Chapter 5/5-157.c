/*Chương 5 - Bài 157 - trang 61*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(float a[], int n);
void ArrayDisplay(float a[], int n);
void TimDoan(float a[], int n);

int main()
{
	const int n = 10;
	float a[n];

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	TimDoan(a, n);
}

void ArrayInput(float a[], int n)
{
	int min = 1;
	int max = 100;
	float t, r;
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		t = (float)(min + rand() % (max - min + 1));
		r = (float)rand() / (float)RAND_MAX;
		a[i] = r + t;
	}
}

void ArrayDisplay(float a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%.3f\t", a[i]);
	}
	printf("\n");
}

void TimDoan(float a[], int n)
{
	float min = a[0];
	float max = a[0];
	for (int i = n - 1; i > 0; --i)
	{
		max = (max < a[i]) ? a[i] : max;
		min = (min > a[i]) ? a[i] : min;
	}
	printf("\n[ %.3f , %.3f ] la doan chua cac gia tri trong mang\n", min, max);
}
