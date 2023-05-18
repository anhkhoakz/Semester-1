/*Chương 1 - Bài 28 - trang 6*/

#include <stdio.h>

int main()
{
	int s = 0, n = 95;

	for (int i = 1; i <= n; ++i)
	{
		if (n % i == 0)
		{
			printf("%4d", i);
			s += i;
		}
	}
	printf("\ns = %d", s);
}
