/*Chương 1 - Bài 20 - trang 6*/

#include <stdio.h>

int main()
{
	int n = 10000;

	printf("Uoc so nguyen duong cua %d la: ", n);
	for (int i = 1; i <= n; ++i)
	{
		if ((n % i) == 0)
		{
			printf("%d ", i);
		}
	}
}
