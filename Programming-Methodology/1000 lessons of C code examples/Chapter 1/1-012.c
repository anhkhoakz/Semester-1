/*Chương 1 - Bài 12 - trang 5*/

#include <stdio.h>

int main()
{
	int s = 0, x = 2, n = 3, t = 1;

	for (int i = 1; i <= n; ++i)
	{
		t = t * x;
		s += t;
	}
	printf("s = %d", s);
}
