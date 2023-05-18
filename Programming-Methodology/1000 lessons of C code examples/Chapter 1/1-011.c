/*Chương 1 - Bài 11 - trang 5*/

#include <stdio.h>

int main()
{
	int s = 0, n = 3, t = 1;

	for (int i = 1; i <= n; ++i)
	{
		t = t * i;
		s += t;
	}
	printf("s = %d", s);
}
