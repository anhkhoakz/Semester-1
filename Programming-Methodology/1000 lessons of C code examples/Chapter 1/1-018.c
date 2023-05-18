/*Chương 1 - Bài 18 - trang 6*/

#include <stdio.h>
#include <math.h>

int main()
{
	float s = 1, t = 1, p = 1;
	int x = 2, n = 3;

	for (int i = 1; i <= n; ++i)
	{
		t = pow(x, i * 2);
		p = 1;
		for (int j = 1; j <= i * 2; ++j)
		{
			p = p * j;
		}
		s += t / p;
	}
	printf("s = %.2f", s);
}
