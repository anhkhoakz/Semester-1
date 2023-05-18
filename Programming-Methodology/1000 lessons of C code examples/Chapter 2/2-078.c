/*Chương 2 - Bài 78 - trang 14*/

#include <stdio.h>

int main()
{
	int i, n;
	scanf("%d", &n);
	i = 1;
	while (i <= n)
	{
		if (n % i == 0)
		{
			printf("%4d", i);
		}
		i = i + 1;
	}
}
