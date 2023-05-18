/*Chương 5 - Bài 155 - trang 61*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int XaNhat(int a[], int n, int x);

int main()
{
	const int n = 10;
	int a[n];
	int x = 15;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	printf("Gia tri trong array xa gia tri %d nhat la: %d \n", x, XaNhat(a, n, x));
}

void ArrayInput(int a[], int n)
{
	int min = -50;
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

int XaNhat(int a[], int n, int x)
{
	int value = a[0];
	int far = abs(a[0] - x); // abs: giá trị tuyệt đối để tìm khoảng cách
	for (int i = 0; i < n; ++i)
	{
		if (far < abs(a[i] - x))
		{
			far = abs(a[i] - x);
			value = a[i];
		}
	}
	return value;
}
