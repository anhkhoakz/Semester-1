/*Chương 5 - Bài 160 - trang 62*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(float a[], int n);
void ArrayDisplay(float a[], int n);
float Func160(float a[], int n);

int main()
{
	const int n = 10;
	float a[n];
	float d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = Func160(a, n);
	if (d == 0)
	{
		printf("Khong co gia tri am lon hon -1. \n");
	}
	else
	{
		printf("Gia tri am cuoi cung lon hon -1 la: %.3f \n", d);
	}
}

void ArrayInput(float a[], int n)
{
	int min = -1;
	int max = 1;
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

float Func160(float a[], int n)
{
	for (int i = n - 1; i > 0; --i)
	{
		if (a[i] > -1 && a[i] < 0)
			return a[i];
	}
	return 0;
}
