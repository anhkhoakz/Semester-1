/*Chương 5 - Bài 124 - trang 55*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void InputArray(int a[], int n);
void DisplayArray(int a[], int n);
_Bool Func124(int a[], int n);

int main()
{
	int const n = 20;
	int a[n];
	_Bool b;

	InputArray(a, n);
	DisplayArray(a, n);

	b = Func124(a, n);
	if (b == true)
	{
		printf("Ton tai gia chan nho hon 2004. \n");
	}
	else
	{
		printf("Khong ton tai gia tri chan nho hon 2004. \n");
	}
}

void InputArray(int a[], int n)
{
	int min = 1000;
	int max = 3000;
	srand(time(NULL));
	for (int i = 0; i < n; ++i)
	{
		a[i] = min + rand() % (max - min + 1);
	}
}

void DisplayArray(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		printf("%d  ", a[i]);
	}
	printf("\n");
}

_Bool Func124(int a[], int n)
{
	_Bool b = false;
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0 && a[i] < 2004)
		{
			b = true;
		}
	}
	return b;
}
