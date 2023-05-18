/*Chương 5 - Bài 140 - trang 58*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int DuongNhoNhat(int a[], int n);

int main()
{
	int const n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = DuongNhoNhat(a, n);
	if (d == -1)
	{
		printf("Khong co so duong trong array a. \n");
	}
	else
	{
		printf("Gia tri duong lon nhat: %d \n", d);
	}
}

void ArrayInput(int a[], int n)
{
	signed int _min = -100;
	signed int _max = 10;
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

int DuongNhoNhat(int a[], int n)
{
	int _max = a[0];
	for (int i = 0; i < n; ++i)
	{
		if (_max < a[i])
		{
			_max = a[i];
		}
	}
	if (_max < 0)
		return -1;
	else
		return _max;
}
