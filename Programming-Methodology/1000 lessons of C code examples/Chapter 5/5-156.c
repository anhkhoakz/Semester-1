/*Chương 5 - Bài 156 - trang 61*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int GanNhat(int a[], int n, int x);

int main()
{
	const int n = 10;
	int a[n];
	int x = 15;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	printf("Vi tri trong array gan gia tri %d nhat la: %d \n", x, GanNhat(a, n, x));
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

int GanNhat(int a[], int n, int x)
{
	int pos = 0;
	int near = abs(a[0] - x); // abs: giá trị tuyệt đối để tìm khoảng cách
	for (int i = 0; i < n; ++i)
	{
		if (near > abs(a[i] - x))
		{
			near = abs(a[i] - x);
			pos = i;
		}
	}
	return pos;
}
