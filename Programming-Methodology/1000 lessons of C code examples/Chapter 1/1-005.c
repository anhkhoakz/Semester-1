/*Chương 1 - Bài 5 - trang 4*/

#include <stdio.h>

int main()
{
	float s = 0;
	int n = 9;

	for (int i = 0; i <= n; ++i)
	{
		s += 1.0 / (2 * i + 1);
	}
	printf("S = %.2f", s);
}
