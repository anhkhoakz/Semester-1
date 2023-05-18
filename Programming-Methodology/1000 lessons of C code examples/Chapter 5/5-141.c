/*Chương 5 - Bài 141 - trang 58*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int VTDuongNhoNhat(int a[], int n);

int main()
{
	int const n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = VTDuongNhoNhat(a, n);
	if (d == -1)
	{
		printf("Khong co so duong trong array a. \n");
	}
	else
	{
		printf("Vi tri gia tri duong lon nhat: a[%d] = %d \n", d, a[d]);
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

int VTDuongNhoNhat(int a[], int n)
{
	int maxPos = 0;
	for (int i = 0; i < n; ++i)
	{
		if (a[maxPos] < a[i])
		{
			maxPos = i;
		}
	}
	if (a[maxPos] < 0)
		return -1;
	else
		return maxPos;
}
