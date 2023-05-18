/*Chương 5 - Bài 159 - trang 61*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ArrayInput(int a[], int n);
void ArrayDisplay(int a[], int n);
int Func159(int a[], int n);

int main()
{
	const int n = 10;
	int a[n];
	int d;

	ArrayInput(a, n);
	ArrayDisplay(a, n);
	d = Func159(a, n);
	if (d == 0)
	{
		printf("Khong co gia tri lon hon 2003. \n");
	}
	else
	{
		printf("Gia tri dau tien lon hon 2003 la: %d \n", d);
	}
}

void ArrayInput(int a[], int n)
{
	int min = 1;
	int max = 2100;
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

int Func159(int a[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i] > 2003)
			return a[i];
	}
	return 0;
}
