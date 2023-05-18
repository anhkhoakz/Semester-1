/*Chương 5 - Bài 128 - trang 57*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(float a[], int n);
void ArrayDisplay(float a[], int n);

int main()
{
	int const n = 10;
	float a[10];

	ArrayInput(a, n);
	ArrayDisplay(a, n);
}

void ArrayInput(float a[], int n)
{
	int _min = 0;
	int _max = 100;
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		int t = rand() % (_max - _min + 1);							 // số nguyên 0 - 100
		float r = (float)(rand() % (_max - _min + 1)) / (float)_max; // số thực 0.0 - 1.0
		a[i] = _min + r + t;
	}
}

void ArrayDisplay(float a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%f\t", a[i]);
	}
}
