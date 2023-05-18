/*Chương 1 - Bài 17 - trang 5*/

#include <stdio.h>
#include <math.h>

int main()
{
	float s = 0, t = 1, p = 1;
	int x = 2, n = 3;

	for (int i = 1; i <= n; ++i)
	{
		t = t * x;
		p = p * i;
		s += t / p;
	}
	printf("s = %.2f", s);
}
