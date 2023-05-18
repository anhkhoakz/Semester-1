/*Chương 1 - Bài 15 - trang 5*/

#include <stdio.h>

int main()
{
	float s = 0;
	int n = 3, t = 0;

	for (int i = 1; i <= n; ++i)
	{
		t = t + i;
		s += 1.0 / t;
	}
	printf("s = %.2f", s);
}
