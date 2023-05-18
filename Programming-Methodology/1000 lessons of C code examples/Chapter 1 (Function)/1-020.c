/*Chương 1 - Bài 20 - trang 6*/

#include <stdio.h>

void Func20(int n);

int main()
{
	int n = 100;

	printf("Uoc so cua %d la: ", n);
	Func20(n);
}

void Func20(int n)
{
	for (int i = 0; i < n / 2; ++i)
	{
		if (n % (i + 1) == 0)
		{
			printf("%d ", i + 1);
		}
	}
}
