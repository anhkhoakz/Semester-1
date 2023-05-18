/*Chương 1 - Bài 13 - trang 5*/

#include <stdio.h>
#include <math.h>

int main()
{
	int s = 0, x = 2, n = 3;

	for (int i = 1; i <= n; ++i)
	{
		s += pow(x, i * 2);
	}
	printf("s = %d", s);
}
