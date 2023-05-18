/*Chương 3 - Bài 96 - trang 37*/

#include <stdio.h>

int main()
{
	int x, s;

	printf("Nhap x: ");
	fflush(stdout);
	scanf("%d", &x);

	if (x < 5)
	{
		printf("x < 5 \n");
		s = -2 * (x * x) + 4 * x - 9;
		printf("f(x) = -2x^2 + 4x - 9 = %d", s);
	}
	else
	{
		printf("x >= 5 \n");
		s = 2 * (x * x) + 5 * x + 9;
		printf("f(x) = 2x^2 + 5x + 9 = %d", s);
	}
}
