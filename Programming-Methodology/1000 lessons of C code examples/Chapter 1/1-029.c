/*Chương 1 - Bài 29 - trang 6*/

#include <stdio.h>

int main()
{
	int n = 13, max = 1;

	for (int i = 1; i <= n; i += 2)
	{
		if (n % i == 0)
		{
			printf("%4d", i);
			if (i > max)
			{
				max = i;
			}
		}
	}
	printf("\nUoc so le lon nhat: %d", max);
}
