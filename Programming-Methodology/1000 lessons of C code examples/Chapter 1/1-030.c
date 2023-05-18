/*Chương 1 - Bài 30 - trang 6*/

#include <stdio.h>

int main()
{
	int n = 7, s = 0;

	for (int i = 1; i <= n / 2; ++i)
	{
		if (n % i == 0)
		{
			s += i;
		}
	}
	if (s == n)
	{
		printf("%d la so hoan thien.", n);
	}
	else
	{
		printf("%d khong la so hoan thien.", n);
	}
}
