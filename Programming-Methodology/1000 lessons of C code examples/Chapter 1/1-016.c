/*Chương 1 - Bài 16 - trang 5*/

#include <stdio.h>

int main()
{
	float s = 0, t = 0, p = 1;
	int x = 2, n = 3;

	for (int i = 1; i <= n; ++i)
	{
		t += i;
		p = p * x;
		s += p / t;
	}
	printf("s = %.2f", s);
}
