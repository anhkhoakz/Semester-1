/*Chương 1 - Bài 14 - trang 5*/

#include <stdio.h>
#include <math.h>

int main()
{
	int s = 0, x = 2, n = 3;
	for (int i = 1; i <= n; ++i)
	{
		s += pow(x, 2 * i + 1);
	}
	printf("s = %d", s);
}
