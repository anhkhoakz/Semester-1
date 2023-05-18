/*Chương 1 - Bài 10 - trang 5*/

#include <stdio.h>

int main()
{
	int s = 1, x = 2, n = 9;

	for (int i = 1; i <= n; ++i)
	{
		s = s * x;
	}
	printf("s = %d", s);
}
